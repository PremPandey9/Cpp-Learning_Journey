#include <iostream>

int main() {
  double ewgt;
  std::cout << "Enter Your Weight On Earth: \n";
  std::cin >> ewgt;

  int number;
  std::cout << "Enter The Number For The Planet You Want To Fight On: \n";
  std::cin >> number;

  double gravity;
  std::string planet;

  switch (number) {

    case 1:
    planet = "Mercury";
    gravity = 0.38;
    break;

    case 2:
    planet = "Venus";
    gravity = 0.91;
    break;

    case 3:
    planet = "Mars";
    gravity = 0.38;
    break;

    case 4:
    planet = "Jupiter";
    gravity =2.34;
    break;

    case 5:
    planet = "Saturn";
    gravity = 1.06;
    break;

    case 6:
    planet = "Uranus";
    gravity = 0.92;
    break;

    case 7:
    planet = "Neptune";
    gravity = 1.19;
    break;
  }

  double pweight;
  pweight = ewgt * gravity;
  std::cout << "Weight on the " << planet << "Is " << pweight << "Kg";

  
  
}