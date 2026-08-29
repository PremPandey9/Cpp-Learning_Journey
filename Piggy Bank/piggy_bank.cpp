#include <iostream>

int main(){
    int one_rs_coin;
    int five_rs_coin;
    int ten_rs_note;
    int twenty_rs_note;
    int hundered_rs_note;

    std::cout << "Enter Total Number Of ₹ 1 Coin: ";
    std::cin >> one_rs_coin;

    std::cout << "Enter Total Number Of ₹ 5 Coin: ";
    std::cin >> five_rs_coin;

    std::cout << "Enter Total Number Of ₹ 10 Note: ";
    std::cin >> ten_rs_note;

    std::cout << "Enter Total Number Of ₹ 20 Note: ";
    std::cin >> twenty_rs_note;

    std::cout << "Enter Total Number Of ₹ 100 Coin: ";
    std::cin >> hundered_rs_note;

    int total_amount;
    total_amount = one_rs_coin + five_rs_coin + ten_rs_note + twenty_rs_note +  hundered_rs_note;

    std::cout << "Total Amount Is: " << total_amount << "₹";


}