//C function which accepts 2 arguments of type int * and swaps them
#include <stdio.h>

void swap(int *a, int *b);

int main() 
{
    int *a, *b;
    int x = 5, y = 10;
    a = &x;
    b = &y;
    
    printf("a = %d  b = %d\n", *a, *b);
    swap(a, b);
    printf("a = %d  b = %d\n", *a, *b);
    
    return 0;
}

void swap(int *a, int *b) 
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}