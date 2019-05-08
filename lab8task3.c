//C function that accepts 3 int * args, assignes the mean of the three numbers to the first argument and zeros the others.
#include <stdio.h>
#include <math.h>

void mean(int *a, int *b, int *c);

int main() 
{
    int x = 1, y = 2, z = 3;
    printf("data: x = %d, y = %d, z = %d\n", x, y, z);
    mean(&x, &y, &z);
    printf("mean: %d\nzeros: %d %d\n", x, y, z);
    
    return 0;
    
}

void mean(int *a, int *b, int *c)
{
    *a = (int)round((*a + *b + *c)/3.0);
    *b = 0;
    *c = 0;
}