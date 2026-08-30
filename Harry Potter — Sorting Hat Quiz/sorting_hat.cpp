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
    switch (two_ques)
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

    int third_ques;
    std::cout << "Which kind of instrument most pleases your ear? \n";
    std::cout << "1. The Violin\n";
    std::cout << "2. The Trumpet\n";
    std::cout << "1. The Piano\n";
    std::cout << "2. The Drum\n";

    std::cout << "Enter Your Choice: ";
    std::cin >> third_ques;
    switch (third_ques)
    {
    case 1:
        std::cout << "I Like Most Violin\n";
        Slytherin == +1;
        break;
    case 2:
        std::cout << "I Like Most Trumpet\n";
        Hufflepuff == +1;
    default:
        break;
    case 3:
        std::cout << "I Like Most Piano\n";
        Ravenclaw == +1;
        break;
    case 4:
        std::cout << "I Like Most Drum\n";
        Gryffindor == +1;
    }
    int fourth_ques;
    std::cout << "Which road tempts you most? \n";
    std::cout << "1. The wide, sunny, grassy lane\n";
    std::cout << "2. The narrow, dark, lantern-lit alley\n";
    std::cout << "1. The twisting, leaf-strewn path through woods\n";
    std::cout << "2. The cobbled street lined with ancient buildings\n";

    std::cout << "Enter Your Choice: ";
    std::cin >> fourth_ques;
    switch (fourth_ques)
    {
    case 1:
        std::cout << "The wide, sunny, grassy lane\n";
        Slytherin == +1;
        break;
    case 2:
        std::cout << "The narrow, dark, lantern-lit alley\n";
        Hufflepuff == +1;
    default:
        break;
    case 3:
        std::cout << "The twisting, leaf-strewn path through woods\n";
        Ravenclaw == +1;
        break;
    case 4:
        std::cout << "The cobbled street lined with ancient buildings\n";
        Gryffindor == +1;
    }
}