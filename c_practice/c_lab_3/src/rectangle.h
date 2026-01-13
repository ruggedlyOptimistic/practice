#ifndef RECTANGLE_H
#define RECTANGLE_H

typedef struct{
    double length;
    double width;
} Rectangle;

int rectangle_is_valid(const Rectangle *r);
double rectangle_perimeter(const Rectangle *r);
double rectangle_area(const Rectangle *r);

#endif