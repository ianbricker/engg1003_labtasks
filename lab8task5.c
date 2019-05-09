/*#include <stdio.h>

//read array data from a file and find greatest value. Print this value 
//and its indices

int main() 
{
    int arrayData[3][3];
    int x, y, max = 0;
    FILE *input;
    input = fopen("input", "r");
    
    for(int row = 0; row < 3; row++)
    {
        for(int column = 0; column < 3; column++) 
        {
            fscanf(input, "%d", &arrayData[row][column]);
            if(arrayData[row][column] > max) 
            {
                max = arrayData[row][column];
                // + 1 so that output appears in (row, column), but isnt indexed from 0
                x = row + 1; 
                y = column + 1;
            }
            
        }
        
    }
    
    printf("%d\n(%d,%d)\n" , max, x, y);
    fclose(input);
}*/