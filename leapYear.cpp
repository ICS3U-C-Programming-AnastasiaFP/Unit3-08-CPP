// copyright Anastasia Friedenstein Patino 2023
// Created on : November.1, 2023
// Program that determines weather its a leap year or not

#include <iostream>
#include <string>

int main() {
    try {
        std::string year_as_string;
        int year_as_int;

        std::cout << "Enter a year: ";
        std::cin >> year_as_string;
        year_as_int = std::stoi(year_as_string);

        if (year_as_int % 400 == 0) {
            std::cout << "This is a leap year" << std::endl;
        } else {
            if (year_as_int % 4 == 0) {
                if (year_as_int % 100 != 0) {
                    std::cout << "This is a leap year" << std::endl;
                } else {
                    std::cout << "This is not a leap year" << std::endl;
                }
            } else {
                std::cout << "This is not a leap year" << std::endl;
            }
        }
    } catch (const std::invalid_argument& e) {
        std::cout << "Please enter a valid year" << std::endl;
    }

    return 0;
}
