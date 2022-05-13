///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_final_exam - EE 205 - Spr 2022
///
/// @file    Rectangle.cpp
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Rectangle.h"


Rectangle::Rectangle(double newLength, double newWidth) {
   length = newLength;
   width = newWidth;
}

double Rectangle::getLength() const {
   return length;
}

double Rectangle::getWidth() const {
   return width;
}

bool Rectangle::isValid(double sizeOfLength, double sizeOfWidth) {
   if ( sizeOfLength <= 0 || sizeOfWidth <= 0 ) {
      throw std::invalid_argument ( "length and width must be > 0" );
   }
   return false;
}

double Rectangle::compute_area() {
   return length * width;
}
