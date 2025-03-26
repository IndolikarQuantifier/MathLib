#include "math.h"
#include <stdio.h>

int main()
{
    double n;
    while(1)
    {
        printf("Enter number :\n");
        scanf("%lf", &n);
        printf("ceil : %d\n", ceil(n));
    }
    

    return 0;
}