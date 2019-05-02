//C function that accepts 3 int * args, assignes the mean of the three numbers to the first argument and zeros the others.
#include <stdio.h>

void mean(int *a, int *b, int *c);

int main() 
{
    int x = 5, y = 6, z = 7;
    printf("data: x = %d, y = %d, z = %d\n", x, y, z);
    mean(&x, &y, &x);
    printf("mean: %d\nzeros: %d %d\n", x, y, z);
    
}

void mean(int *a, int *b, int *c)
{
    int mean;
    mean = (*a + *b + *c)/3;
    a = &mean;
    *b = 0;
    *c = 0;
}