#include <iostream>

int main() {
  double wt;
  double wtmars;
  
  std::cout << "Enter The Weight: ";
  std::cin >> wt;

  wtmars = wt*0.38;

  std::cout << "Weight On Mars Is: "  << wtmars << "kg";
  std::cout <<"\n";
  double dismil;
  double diskm;

  std::cout << "Enter The Distance In Miles: ";
  std::cin >> dismil;

  diskm = dismil*1.60934;

  std::cout << "Distance in Kilometers Is: "  << diskm << "km";
}