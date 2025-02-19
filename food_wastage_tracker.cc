// Anderson Pham
// CPSC 121L-06
// 11/26/23
// ahpham123@csu.fullerton.edu
// ahpham123

#include "food_wastage_tracker.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (food_wastage_tracker.h), only
// if you didn't implement them inline within food_wastage_tracker.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the FoodWastageTracker
// class.
// ===================================================================
bool FoodWastageTracker::AddFoodWastageRecord(const FoodWastageRecord& record) {
  for (auto& rec : records_) {
    if ((rec.GetDate() == record.GetDate()) &&
        (rec.GetMeal() == record.GetMeal()) &&
        (rec.GetFoodName() == record.GetFoodName()) &&
        (rec.GetQuantity() == record.GetQuantity()) &&
        (rec.GetWastageReason() == record.GetWastageReason()) &&
        (rec.GetDisposalMechanism() == record.GetDisposalMechanism()) &&
        (rec.GetCost() == record.GetCost())) {
      return false;
    }
  }
  records_.push_back(record);
  return true;
}
bool FoodWastageTracker::DeleteFoodWastageRecord(
    const FoodWastageRecord& record) {
  for (auto it = records_.begin(); it != records_.end(); it++) {
    if ((it->GetDate() == record.GetDate()) &&
        (it->GetMeal() == record.GetMeal()) &&
        (it->GetFoodName() == record.GetFoodName()) &&
        (it->GetQuantity() == record.GetQuantity()) &&
        (it->GetWastageReason() == record.GetWastageReason()) &&
        (it->GetDisposalMechanism() == record.GetDisposalMechanism()) &&
        (it->GetCost() == record.GetCost())) {
      records_.erase(it);
      return true;
    }
  }
  return false;
}
std::vector<FoodWastageRecord> FoodWastageTracker::GetAllRecords() const {
  return records_;
}
FoodWastageReport FoodWastageTracker::GenerateReport() const {
  FoodWastageReport report(records_);
  return report;
}