#include <stdio.h>

int main() 
{
    int rows;
    
    printf("Enter the number for the pattern (Pascal's triangle): ");
    scanf("%d", &rows);
    
    int triangle[rows][rows];   // we use [rows][rows] for 2D array to store Pascal's triangle
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++) 
        {
            if (j == 0 || j == i) // the first and last row of each element is 1
            {
                triangle[i][j] = 1;  // here we equalled to 1 as first and last element are always 1
            }
            else
            {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];  
                // [i][j] reflets the current position in the trianle we are filling
                
                //[i][j] is the numberabove left of the current position
                
                // [i - 1][j] is the number which is directly above the current position 
                
                
            }
        }
    }
    
    
    for (int i = 0; i < rows; i++) // here the i++ moves the triangle row by row 
    
    {
        for (int space = 0; space < rows - i - 1; space++)
            printf("  ");   //here we used the(" ") as it creates a spce for allignment 
            
        for (int j = 0; j <= i; j++) // here the j++ moves across the triangle (element by element in each row).
        

            printf("%4d", triangle[i][j]);
            // here we used the %4d as it prints the integer wit atleast 4 spaces and reduces to 3 then 2 so on so forth
            

        printf("\n");
    }

    return 0;
}
