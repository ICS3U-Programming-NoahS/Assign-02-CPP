// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Oct. 15th, 2023
// This program calculates and displays
// the volume and surface area of a
// cube with the proper unit of measurement.
#include <iomanip>
#include <iostream>

int main() {
    // Declare variables
    float sideLength, volume, surfaceArea;

    // Declare unit as a string. Source: (https://www.tutorialspoint.com/cplusplus/cpp_strings.htm)
    char unit[10];

    // Get the side length from the user
    std::cout << "Enter the side length: ";
    std::cin >> sideLength;

    // Check if the side length is greater than 0
    if (sideLength <= 0) {
        std::cout << "Please enter a number greater than 0!" << std::endl;
    } else {
        // Get the unit of measurement
        std::cout << "Enter the unit of measurement: ";
        std::cin >> unit;

        // Calculate the volume and the surface area
        volume = sideLength * sideLength * sideLength;
        surfaceArea = sideLength * sideLength * 6;

        // Display the volume and surface area
        // back to the user, with the proper units
        std::cout << "The volume is: "
            << std::fixed << std::setprecision(2)
                << std::setfill('0') << volume;
            std::cout << unit;
        std::cout << "^3." << std::endl;
        std::cout << "The surface area is: "
            << std::fixed << std::setprecision(2)
            << std::setfill('0') << surfaceArea;
        std::cout << unit;
        std::cout << "^2." << std::endl;
        }
}
