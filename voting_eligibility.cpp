// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Sept 2021
// This program asks the user's age for dating permission

#include <iostream>


int main() {
    std::string age;
    int ageInt;

    // this function checks if the user follows the age guidelines for dating

    // input
    std::cout << "Please enter your age: ";
    std::cin >> age;
    std::cout << std::endl;

    // process & output
    try {
        ageInt = std::stoi(age);

        if (ageInt > 0) {
            if (ageInt >= 18) {
                std::cout << "You are eligible to vote.";
            } else {
                std::cout << "You are not eligible to vote.";
            }
        } else {
            std::cout << "That is an invalid answer.";
        }
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid answer.";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
