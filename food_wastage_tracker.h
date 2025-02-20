#ifndef FOOD_WASTAGE_TRACKER_H_
#define FOOD_WASTAGE_TRACKER_H_
#include <vector>

// Anderson Pham
// CPSC 121L-06
// 11/28/2023
// ahpham123@csu.fullerton.edu
// ahpham123

#include "food_wastage_record.h"
#include "food_wastage_report.h"

class FoodWastageTracker {
  // ======================= YOUR CODE HERE =======================
  // Write the FoodWastageTracker class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 public:
  bool AddFoodWastageRecord(const FoodWastageRecord& record);
  bool DeleteFoodWastageRecord(const FoodWastageRecord& record);
  std::vector<FoodWastageRecord> GetAllRecords() const;
  FoodWastageReport GenerateReport() const;

 private:
  std::vector<FoodWastageRecord> records_;
};

#endif