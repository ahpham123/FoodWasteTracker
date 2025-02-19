#include <string>
#include <vector>
#ifndef FOOD_WASTAGE_REPORT_H_
#define FOOD_WASTAGE_REPORT_H_
#include "food_wastage_record.h"

// Anderson Pham
// CPSC 121L-06
// 11/28/2023
// ahpham123@csu.fullerton.edu
// ahpham123

class FoodWastageReport {
  // ======================= YOUR CODE HERE =======================
  // Write the FoodWastageReport class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 public:
  FoodWastageReport(std::vector<FoodWastageRecord> records);
  std::vector<std::string> GetMostWastedFoods() const;
  std::vector<std::string> GetMostCostlyMeal() const;
  double GetTotalCostOfFood() const;
  std::vector<std::string> GetMostCommonReasons() const;
  std::vector<std::string> GetCommonDisposalMechanisms() const;
  std::vector<std::string> GetSuggestedStrategies() const;

 private:
  std::vector<FoodWastageRecord> records_;
};

#endif