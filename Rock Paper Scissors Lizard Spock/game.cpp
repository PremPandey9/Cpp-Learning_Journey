#include <iostream>
#include <random>

int main(){

    int Rock ;
    int Paper ;
    int Scissors;
    int Lizard;
    int Spock;

    int move;
    std::cout << "Choose Your Move: \n";
    std::cout << "1. Rock \n";
    std::cout << "2. Paper \n";
    std::cout << "3. Scissors \n";
    std::cout << "4. Lizard \n";
    std::cout << "5. Spock \n";

    std::cout << "Enter Your Choice: ";
    std::cin >> move;

    int cmove;
    std::cout << "Computer's Choice \n";
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution dist(1, 5);
    
    cmove = dist(gen);
    switch (cmove)
    {
    case 1:
        std::cout << "Rock\n";
        break;
    case 2:
        std::cout << "Paper\n";
        break;
    case 3:
        std::cout << "Scissors\n";
        break;
    case 4:
        std::cout << "Lizard\n";
        break;
    case 5:
        std::cout << "Spock\n";
        break;
    }

    if (move == cmove)
    {
        std::cout << "MATCH TIE";
    }
    else if ((move == Rock && (cmove == Scissors || cmove == Lizard)) || (move == Scissors && (cmove == Paper || cmove == Lizard)) || (move == Lizard && (cmove == Paper || cmove == Spock)) || (move == Rock && (cmove == Rock || cmove == Scissors )))
    {
        std::cout << "YOU WIN ";
    }
    else{
        std::cout << "COMPUTER WIN";
    }
}