#include <iostream>
#include <string>

int main() {
    double ewgt;

    std::cout << "Enter Your Weight On Earth: ";
    std::cin >> ewgt;

    std::string planet;

    std::cout << "Enter The Planet You Want To Fight On: ";
    std::cin >> planet;

    double gravity;

    if (planet == "Mercury") {
        gravity = 0.38;
    }
    else if (planet == "Venus") {
        gravity = 0.91;
    }
    else if (planet == "Mars") {
        gravity = 0.38;
    }
    else if (planet == "Jupiter") {
        gravity = 2.34;
    }
    else if (planet == "Saturn") {
        gravity = 1.06;
    }
    else if (planet == "Uranus"){
        gravity = 0.92;
    }
    else if (planet == "Neptune"){
        gravity = 1.19;
    }
    else {
        std::cout << "Invalid planet!";
        return 0;
    }

    double pweight = ewgt * gravity;

    std::cout << "Your weight on " << planet
              << " is " << pweight << " Kg";

    return 0;
}