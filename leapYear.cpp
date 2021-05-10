// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: May 2021
// This program verifies if a year is a leap year or not

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int main() {
    std::string yearString;
    int yearInt;
    std::cout << "Insert a year: ";

    std::cin >> yearString;

    std::cout << std::endl;

    try {
        yearInt = stoi(yearString);

        if (yearInt % 4 == 0) {
            if (yearInt % 100 == 0) {
                if (yearInt % 400 == 0) {
                    std::cout << yearString << " is a leap year!" << std::endl;
                } else {
                    std::cout << yearString << " is NOT a leap year!"
                    << std::endl;
                }
            } else {
                std::cout << yearString << " is a leap year!"
                << std::endl;
            }
        } else {
            std::cout << yearString << " is NOT a leap year!"
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nThis input is invalid, please, insert an integer."
        << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
