#include "math.h"

int ceil(double num)
{
    int n = (int) num;
    double fraction = num - n;
    return fraction > 0.0 ? n + 1 : n;
}

int ceilf(float num)
{
    int n = (int) num;
    float fraction = num - n;
    return fraction > 0.0f ? n + 1 : n;
}

long int ceill(double num)
{
    long int n = (long int) num;
    double fraction = num - n;
    return fraction > 0.0 ? n + 1 : n;
}

long int ceilfl(float num)
{
    long int n = (long int) num;
    float fraction = num - n;
    return fraction > 0.0f ? n + 1 : n;
}

int floor(double num)
{
    int n = (int) num;
    double fraction = num - n;
    return fraction > 0.0 ? n - 1 : n;
}

int floorf(float num)
{
    int n = (int) num;
    float fraction = num - n;
    return fraction > 0.0 ? n - 1 : n;
}

long int floorl(double num)
{
    long int n = (long int) num;
    double fraction = num - n;
    return fraction > 0.0 ? n - 1 : n;
}

long int floorfl(float num)
{
    long int n = (long int) num;
    float fraction = num - n;
    return fraction > 0.0 ? n - 1 : n;
}

int abs(int num)
{
    if(num < 0)
    {
        num = num * -1;
    }
    return num;
}

long int absl(long int num)
{
    if(num < 0)
    {
        num = num * -1;
    }
    return num;
}

int mod(int divident, int divisor)
{
    return divident % divisor;
}

long int modl(long int divident, long int divisor)
{
    return divident % divisor;
}
