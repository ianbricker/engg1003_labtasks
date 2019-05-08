#include <stdio.h>

//calculate the mean of a 2D array
int main() 
{
    float xn, rowSum = 0, totalSum = 0, mean;
    float testArray[3][3] = { {0.1, 0.2, 0.3}, {1.1, 1.2, 1.3}, {2.1, 2.2, 2.3} };
    
    for(int rowCount = 0; rowCount < 3; rowCount++) //counts through columns
    {
        for(int colCount = 0; colCount < 3; colCount++) //counts through rows
        {
        
            xn = testArray[rowCount][colCount];
            rowSum = rowSum + xn;
        }
        
        totalSum = totalSum + rowSum;
    }
    
    mean = rowSum/9.0;
    printf("%f\n", mean);
    return 0;
}