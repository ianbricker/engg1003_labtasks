#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void pixelMean(float *r, float *g, float *b);

int main() 
{
    float image[5][5][3];
    int x = 0, y = 0;
    
    FILE *input;
    input = fopen("input", "r");
    
    for(y = 0; y < 5; y++) 
    {
        for(x = 0; x < 5; x++) 
        {
            fscanf(input, "%f %f %f", &image[x][y][0], &image[x][y][1], &image[x][y][2]); 
        }
    }
    y = 0;
    x = 0;
    
    for(y = 0; y < 2; y++) 
    {
        for(x = 0; x < 5; x++) 
        {
            pixelMean(&image[x][y][0], &image[x][y][1], &image[x][y][2]);
            printf("%d %d: %f %f %f\n", x, y, image[x][y][0], image[x][y][1], image[x][y][2]);
            
        }
    }
    
    fclose(input);
    return 0;
}

void pixelMean(float *r, float *g, float *b) 
{
    float mean;
    mean = (*r + *g + *b)/3.0;
    *r= mean;
    *g= mean;
    *b = mean;    
}