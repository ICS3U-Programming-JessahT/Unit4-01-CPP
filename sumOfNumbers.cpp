// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 11/10/2022
// This program ask the user for a positive integer
// and it will track the loop.

#include <iostream>

int main() {
// declare counter and variables for program
    int loopCounter = 0;
    int sum = 0;
    std::string userInput;
    int userInt;
    float userFloat;
// get input from user
    std::cout << "Enter a positive number: ";
    std::cin >> userInput;
    std::cout << "" << std::endl;
// try catch any stings or floats
    try {
        userInt = std::stoi(userInput);
        userFloat = std::stof(userInput);

        if (userFloat != userInt) {  // catch any decimals
            std::cout << "Invalid, enter a whole positive number"
            << std::endl;
        } else if (userInt >= 0) {  // catch any negative integers
              while (loopCounter <= userInt) {
                 sum = sum + loopCounter;
                 std::cout << "Tracking " << loopCounter
                 << " times through the loop \n";
                 loopCounter = loopCounter + 1;
                }
            std::cout << "The sum is: " << sum;

        } else {
            std::cout << userInt << " Is invalid, put a positive number";
        }
    } catch (std::invalid_argument) {  // catch any invalid strings
        std::cout << userInput << " Is invalid, put a positive number";
    }
}
