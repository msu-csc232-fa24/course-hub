/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2024
 *
 * @file    main.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry point of the main target.
 * @version 1.0.0
 * @date    08/23/2024
 *
 * @copyright Copyright (c) 2024 James R. Daehn
 */

#include <iostream>
#include "csc232.h"

int main()
{
    // Computes the volume of a sphere
    const Real PI = 3.14159;
    double radius = 0.0;

    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    if (radius == UNIT_CIRCLE_RADIUS)
    {
        std::cout << "You've given us a unit circle radius!" << std::endl;
    }

    // This is the proper way to compare floating-point numbers...
    // It's essentially saying, are we "close enough" to consider them equal
    // because of the way floating-point numbers are represented in memory,
    // checking for exact equality isn't always going to work.
    if (abs(radius - UNIT_CIRCLE_RADIUS) < 1e-9)
    {
        std::cout << "You've given us a unit circle radius!";
    }

    double volume = 4.0 * radius * radius * radius / 3.0;
    std::cout << "The volume of a sphere of radius "
              << radius << " inches is " << volume
              << " cubic inches.\n";

    return 0;
} // end program
