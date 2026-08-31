#include <iostream>

int main(){
    int number;

    for (number = 1; number <= 100; number++)
    {
        if (number % 5 == 0 && number % 3 == 0)
        {
            std::cout << "FizzBuzz\n";
        }
        else if (number % 5 == 0)
        {
            std::cout << "Buzz\n";
        }
        else if (number % 3 == 0)
        {
            std::cout << "Fizz\n";
        }
        else{
            std::cout << number << "\n";
        }
        
    }
    
}