#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "Enter coefficient of x²";
    std::cin >> a;

    std::cout << "Enter coefficient of x";
    std::cin >> b;

    std::cout << "Enter constant term";
    std::cin >> c;

    double x;
    x = (-b - std::sqrt((b*b)-(4*a*c)))/(2*a);

    double x2;
    x2 = (-b + std::sqrt((b*b)-(4*a*c)))/(2*a);

    int quadratic_equation = a*x2 + b*x +c;
    
    std::cout << "x " << x;
    std::cout << "\n";
    std::cout << "x2 " << x2;
    std::cout << "\n";
    std::cout << "quadratic_equation " << quadratic_equation;

}