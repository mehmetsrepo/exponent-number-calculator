#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double power(double num, double pow)
{
    double result = 1;
    int is_negative_expo = pow < 0;
    pow = fabs(pow);

    if(pow == 0)
    {
        return 1;
    }
    for(int i = 0; i < pow; i++)
    {
        result *= num;
    }
    if(is_negative_expo)
    {
        result = 1/result;
    }
    return result;
}

int main()
{
    printf("%.4lf", power(2, 0.25));
    return 0;
}