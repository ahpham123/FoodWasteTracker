#ifndef FOOD_WASTAGE_RECORD_H_
#define FOOD_WASTAGE_RECORD_H_
#include <iostream>
#include <vector>

// Anderson Pham
// CPSC 121L-06
// 11/28/2023
// ahpham123@csu.fullerton.edu
// ahpham123

class FoodWastageRecord {
  // ======================= YOUR CODE HERE =======================
  // Write the FoodWastageRecord class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 public:
  std::string GetDate() const;
  void SetDate(std::string date);
  std::string GetMeal() const;
  void SetMeal(std::string meal);
  std::string GetFoodName() const;
  void SetFoodName(std::string food_name);
  double GetQuantity() const;
  void SetQuantity(double quantity_in_ounces);
  std::string GetWastageReason() const;
  void SetWastageReason(std::string wastage_reason);
  std::string GetDisposalMechanism() const;
  void SetDisposalMechanism(std::string disposal_mechanism);
  double GetCost() const;
  void SetCost(double cost);

 private:
  std::string date_;
  std::string meal_;
  std::string food_name_;
  double quantity_in_ounces_;
  std::string wastage_reason_;
  std::string disposal_mechanism_;
  double cost_;
};

#endif