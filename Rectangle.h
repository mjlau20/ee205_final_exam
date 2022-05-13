///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_final_exam - EE 205 - Spr 2022
///
/// @file    Rectangle.h
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    13_May_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_FINAL_EXAM_RECTANGLE_H
#define EE205_FINAL_EXAM_RECTANGLE_H

#include "Shape.h"


class Rectangle : public Shape {
public:
   Rectangle( double newLength, double newWidth );

public:
   double getLength() const;

   double getWidth() const;

   bool   isValid(double sizeOfLength, double sizeOfWidth);

   double compute_area() override;

protected:
   double length;
   double width;
};

#endif //EE205_FINAL_EXAM_RECTANGLE_H
