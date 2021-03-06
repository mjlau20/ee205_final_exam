///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_final_exam - EE 205 - Spr 2022
///
/// @file    Square.cpp
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "Square.h"


Square::Square(double newSide) : Rectangle(newSide, newSide) {
}

double Square::getSide(double sizeOfSide) {
   return sizeOfSide;
}
