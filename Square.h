///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_final_exam - EE 205 - Spr 2022
///
/// @file    Square.h
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    13_May_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_FINAL_EXAM_SQUARE_H
#define EE205_FINAL_EXAM_SQUARE_H

#include "Rectangle.h"


class Square : public Rectangle {
public:
   Square( double newSide );

public:
   double getSide( double sizeOfSide );
};

#endif //EE205_FINAL_EXAM_SQUARE_H
