#ifndef __MATH_H__ /* __MATH_H__ */

#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)

/*
    Algebric Functions
*/

int ceil(double num);
int ceilf(float num);

long int ceill(double num);
long int ceilfl(float num);

int floor(double num);
int floorf(float num);

long int floorl(double num);
long int floorfl(float num);

int abs(int num);
long int absl(long int num);

int mod(int divident, int divisor);
long int modl(long int divident, long int divisor);

#endif  /* __MATH_H__ */