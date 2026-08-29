#include <iostream>

int main() {
  // Dog Is 8 Years Old.
  int dog_age;
  int early_years;  // dog’s first two years
  int later_years;  // dog’s following years
  int human_years;  // dog’s total human years

  std::cout << "Enter The Dog Age";
  std::cin >> dog_age;

    // First two years
  if (dog_age <= 2) {
    human_years = dog_age * 10.5;
  } 
  else {

  // The first two years
  early_years = 21;
  // The following years
  later_years = (dog_age - 2)*4;
  // Human Years
  human_years = early_years + later_years;
  }
  std::cout << "My name is ____! Ruff ruff, I am " << human_years << " years old in human years.";
}