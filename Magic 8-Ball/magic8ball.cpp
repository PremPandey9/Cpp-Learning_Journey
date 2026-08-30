#include <iostream>
#include <random>

int main(){
    std::string ques;
    std::cout << "Enter Your Question Here : ";
    std::getline(std::cin, ques);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 8);

    int number = dist(gen);
    switch(number)
    {
    case 1:
        std::cout << "Yes, definitely!";
        break;
    case 2:
        std::cout << "It is certain.";
        break;
    case 3:
        std::cout << "Without a doubt.";
        break;
    case 4:
        std::cout << "Most likely.";
        break;
    case 5:
        std::cout << "Ask again later.";
        break;
    case 6:
        std::cout << "Better not tell you now.";
        break;
    case 7:
        std::cout << "Don't count on it.";
        break;
    case 8:
        std::cout << "My sources say no.";
        break;
    
    default:
        break;
    }

}