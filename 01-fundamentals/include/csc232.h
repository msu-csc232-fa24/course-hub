/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2024
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 1.0.0
 * @date    09/02/2023
 *
 * @copyright Copyright (c) 2023 James R. Daehn
 */

#ifndef COURSE_HUB_CSC232_H
#define COURSE_HUB_CSC232_H

#include <cmath>
#include <string>
#include "Bag.h"

typedef double Real;
using std::abs;

const static Real UNIT_CIRCLE_RADIUS{1.0};

template class csc232::BoxInterface<std::string>;

#endif //COURSE_HUB_CSC232_H
