#include <iostream>

int main(){
    int Gryffindor;
    int Ravenclaw;
    int Hufflepuff;
    int Slytherin;

    int one_ques;
    std::cout << "Do you like Dawn or Dusk?\n";
    std::cout << "1. Dawn\n";
    std::cout << "2. Dusk\n";

    std::cout << "Enter Your Choice: ";
    std::cin >> one_ques;
    switch (one_ques)
    {
    case 1:
        std::cout << "You Select Dawn\n";
        Gryffindor == +1;
        break;
    case 2:
        std::cout << "You Select Dusk\n";
        Slytherin == +1;
    }

    int two_ques;
    std::cout << "When I'm dead, I want people to remember me as: \n";
    std::cout << "1. The Good\n";
    std::cout << "2. The Great\n";
    std::cout << "1. The Wise\n";
    std::cout << "2. The Bold\n";

    std::cout << "Enter Your Choice: ";
    std::cin >> two_ques;
    switch (one_ques)
    {
    case 1:
        std::cout << "The Good Person\n";
        Hufflepuff == +1;
        break;
    case 2:
        std::cout << "The Great Person\n";
        Slytherin == +1;
    default:
        break;
    case 3:
        std::cout << "The Wise Person\n";
        Ravenclaw == +1;
        break;
    case 4:
        std::cout << "The Bold Person\n";
        Gryffindor == +1;
    }
    
}