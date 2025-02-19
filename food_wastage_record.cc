// Anderson Pham
// CPSC 121L-06
// 11/28/2023
// ahpham123@csu.fullerton.edu
// ahpham123

#include "food_wastage_record.h"

#include <iostream>

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (food_wastage_record.h), only
// if you didn't implement them inline within food_wastage_record.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the FoodWastageRecord
// class.
// ===================================================================
std::string FoodWastageRecord::GetDate() const { return date_; }
void FoodWastageRecord::SetDate(std::string date) { date_ = date; }
std::string FoodWastageRecord::GetMeal() const { return meal_; }
void FoodWastageRecord::SetMeal(std::string meal) { meal_ = meal; }
std::string FoodWastageRecord::GetFoodName() const { return food_name_; }
void FoodWastageRecord::SetFoodName(std::string food_name) {
  food_name_ = food_name;
}
double FoodWastageRecord::GetQuantity() const { return quantity_in_ounces_; }
void FoodWastageRecord::SetQuantity(double quantity_in_ounces) {
  quantity_in_ounces_ = quantity_in_ounces;
}
std::string FoodWastageRecord::GetWastageReason() const {
  return wastage_reason_;
}
void FoodWastageRecord::SetWastageReason(std::string wastage_reason) {
  wastage_reason_ = wastage_reason;
}
std::string FoodWastageRecord::GetDisposalMechanism() const {
  return disposal_mechanism_;
}
void FoodWastageRecord::SetDisposalMechanism(std::string disposal_mechanism) {
  disposal_mechanism_ = disposal_mechanism;
}
double FoodWastageRecord::GetCost() const { return cost_; }
void FoodWastageRecord::SetCost(double cost) { cost_ = cost; }