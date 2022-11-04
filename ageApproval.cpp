// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Oct 2022
// This program sees if grandma approves of your age.

#include <iostream>

int main() {
    // This function determines if they can date

    int ageInt;
    std::string ageString;

    // Input
    std::cout << "Please enter your age: ";
    std::cin >> ageString;
    std::cout << "" << std::endl;

    // Process and Output
    try {
        ageInt = std::stoi(ageString);

        if (ageInt > 25 && ageInt < 40) {
            std::cout << "You are an acceptable age!" << std::endl;
        } else if (ageInt < 0) {
            std::cout << "That is not a valid age!" << std::endl;
        } else {
            std::cout << "You are not an acceptable age" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "" << ageString << ", is not an integer" << std::endl;
    }

    std::cout << ("\nDone.") << std::endl;
}
