#include <stdio.h>
#include "io.h"

int read_double(const char *prompt, double *out_value)
{
    int rc;

    if (!prompt || !out_value)
    {
        rc = -1;    // return value of -1 denotes an error condition
    }
    else
    {
        printf("%s", prompt); // expecting prompt to include the newline
        rc = scanf("%lf", out_value);
    }

    return rc == 1;
}