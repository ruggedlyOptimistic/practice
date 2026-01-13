#include <stdio.h>
#include "rectangle.h"
#include "io.h"

int main(void)
{
    Rectangle r = {0};  // what do the curly braces & value mean?
    int rc;
    
    puts("*** Rectangle Calculator V2***");

    if (!read_double("Enter length: ", &r.length))
    {
        puts("Invalid input for length.");
        rc = 1;
    }
    if (!read_double("Enter width: ", &r.width))
    {
        puts("Invalid input for width.");
        rc = 1;
    }    

    if (!rectangle_is_valid(&r))
    {
        puts("Invalid rectangle: length and width must be > 0.0");
        rc = 1;
    }
    else
    {
        rc = 0;
    }

    printf("Length: %f\n", r.length);
    printf("Width: %f\n", r.width);
    printf("Perimeter: %f\n", rectangle_perimeter(&r));
    printf("Area: %f\n", rectangle_area(&r));

    return rc;
}