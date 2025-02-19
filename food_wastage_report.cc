// Anderson Pham
// CPSC 121L-06
// 11/28/2023
// ahpham123@csu.fullerton.edu
// ahpham123

#include "food_wastage_report.h"

#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (food_wastage_report.h), only
// if you didn't implement them inline within food_wastage_report.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the FoodWastageReport
// class.
// ===================================================================
FoodWastageReport::FoodWastageReport(std::vector<FoodWastageRecord> records) {
  records_ = records;
}
std::vector<std::string> FoodWastageReport::GetMostWastedFoods() const {
  std::map<std::string, int> wasted_foods;
  for (const auto& food : records_) {
    wasted_foods[food.GetFoodName()]++;
  }
  int max_wastage = 0;
  for (const auto& pair : wasted_foods) {
    max_wastage = std::max(max_wastage, pair.second);
  }
  std::vector<std::string> most_wasted_food;
  for (const auto& pair : wasted_foods) {
    if (pair.second == max_wastage) {
      most_wasted_food.push_back(pair.first);
    }
  }
  std::sort(most_wasted_food.begin(), most_wasted_food.end());
  return most_wasted_food;
}
std::vector<std::string> FoodWastageReport::GetMostCostlyMeal() const {
  std::map<std::string, double> meal_costs;
  for (const auto& record : records_) {
    const std::string& meal_name = record.GetMeal();
    meal_costs[meal_name] += record.GetCost();
  }
  double max_cost = 0.0;
  for (const auto& pair : meal_costs) {
    max_cost = std::max(max_cost, pair.second);
  }
  std::vector<std::string> most_costly_meals;
  for (const auto& pair : meal_costs) {
    if (pair.second == max_cost) {
      most_costly_meals.push_back(pair.first);
    }
  }
  std::sort(most_costly_meals.begin(), most_costly_meals.end());
  return most_costly_meals;
}
double FoodWastageReport::GetTotalCostOfFood() const {
  double total_cost = 0.0;
  for (const auto& food : records_) {
    total_cost += food.GetCost();
  }
  return total_cost;
}
std::vector<std::string> FoodWastageReport::GetMostCommonReasons() const {
  std::map<std::string, int> reason_count;
  for (const auto& record : records_) {
    const std::string& reason = record.GetWastageReason();
    reason_count[reason]++;
  }
  int max_occurrence = 0;
  std::vector<std::string> most_common_reasons;
  for (const auto& pair : reason_count) {
    if (pair.second > max_occurrence) {
      max_occurrence = pair.second;
      most_common_reasons = {pair.first};
    } else if (pair.second == max_occurrence) {
      most_common_reasons.push_back(pair.first);
    }
  }
  std::sort(most_common_reasons.begin(), most_common_reasons.end());
  return most_common_reasons;
}
std::vector<std::string> FoodWastageReport::GetCommonDisposalMechanisms()
    const {
  std::map<std::string, int> disposal_counts;
  for (const auto& record : records_) {
    const std::string& disposal_mechanism = record.GetDisposalMechanism();
    disposal_counts[disposal_mechanism]++;
  }
  int max_occurrence = 0;
  for (const auto& pair : disposal_counts) {
    max_occurrence = std::max(max_occurrence, pair.second);
  }
  std::vector<std::string> common_disposal_mechanisms;
  for (const auto& pair : disposal_counts) {
    if (pair.second == max_occurrence) {
      common_disposal_mechanisms.push_back(pair.first);
    }
  }
  std::sort(common_disposal_mechanisms.begin(),
            common_disposal_mechanisms.end());
  return common_disposal_mechanisms;
}
std::vector<std::string> FoodWastageReport::GetSuggestedStrategies() const {
  std::map<std::string, int> reason_counts;
  for (const auto& record : records_) {
    const std::string& wasted_reason = record.GetWastageReason();
    reason_counts[wasted_reason]++;
  }
  int max_occurrence = 0;
  for (const auto& pair : reason_counts) {
    max_occurrence = std::max(max_occurrence, pair.second);
  }
  std::vector<std::string> most_common_reasons;
  for (const auto& pair : reason_counts) {
    if (pair.second == max_occurrence) {
      most_common_reasons.push_back(pair.first);
    }
  }
  std::vector<std::string> suggested_strategies;

  bool buy_less_food_added = false;
  bool recycle_left_overs = false;
  for (const auto& reason : most_common_reasons) {
    if (reason == "Expired") {
      suggested_strategies.push_back("Donate before expiration");
      std::cout << "Donate before expiration";
      recycle_left_overs = true;
    } else {
      if (!recycle_left_overs) {
        suggested_strategies.push_back("Recycle left overs");
        recycle_left_overs = true;
      }
      if (reason == "Tastes bad" && !buy_less_food_added) {
        suggested_strategies.push_back("Buy less food");
        std::cout << "Buy less food";
        buy_less_food_added = true;
      }
      if (reason == "Too much left overs") {
        suggested_strategies.push_back("Cook small servings");
        std::cout << "Cook small servings";
        if (!buy_less_food_added) {
          suggested_strategies.push_back("Buy less food");
          std::cout << "Buy less food";
          buy_less_food_added = true;
        }
      }
    }
  }
  return suggested_strategies;
}