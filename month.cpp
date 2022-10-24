// Copyright(c) 2022 Marshall Demars All rights reserved.
//
// Created by : Marshall Demars
// Created on : October 2022
// This program uses select case to find months of the year
//    with user input

#include <iostream>

int main() {
    // creating variables
    int userMonth;

    // input
    std::cout << "Entr a number for a month of the year (1-12): ";
    std::cin >> userMonth;

    // process and output
    switch (userMonth) {
        case 1:
            std::cout << "You chose January!";
            break;
        case 2:
            std::cout << "You chose February!";
            break;
        case 3:
            std::cout << "You chose March!";
            break;
        case 4:
            std::cout << "You chose April!";
            break;
        case 5:
            std::cout << "You chose May!";
            break;
        case 6:
            std::cout << "You chose June!";
            break;
        case 7:
            std::cout << "You chose July!";
            break;
        case 8:
            std::cout << "You chose August!";
            break;
        case 9:
            std::cout << "You chose September!";
            break;
        case 10:
            std::cout << "You chose October!";
            break;
        case 11:
            std::cout << "You chose November!";
            break;
        case 12:
            std::cout << "You chose December!";
            break;
        default:
            std::cout << "Not a month!";
    }

    std::cout << "\nDone.";
}
