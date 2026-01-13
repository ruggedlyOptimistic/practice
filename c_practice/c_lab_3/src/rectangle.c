#include "rectangle.h"

int rectangle_is_valid(const Rectangle *r)
{
    int is_valid;

    if (!r)
    {
        is_valid = 0;
    }
    else if (r->length > 0.0 && r-> width > 0.0)
    {
        is_valid = 1;
    }
    else
    {
        is_valid = -1;
    }

    return is_valid;
}

double rectangle_perimeter(const Rectangle *r)
{
    double perimeter;
    perimeter = 2 * (r->length + r->width);

    return perimeter;
}

double rectangle_area(const Rectangle *r)
{
    double area;
    area = r->length * r->width;

    return area;
}