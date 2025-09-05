#include<stdio.h>
int main()
{ 
    float x1, x2, x3, y1, y2, y3;
    
    printf("Enter the value for x1 and y1: ");
    scanf("%f %f", &x1, &y1);
    
    printf("Enter the value for x2 and y2: ");
    scanf("%f %f", &x2, &y2);
    
    printf("Enter the value for x3 and y3: ");
    scanf("%f %f", &x3, &y3);
    
    if ((y2 - y1) * (x3 - x1) == (y3 - y1) * (x2 - x1))
    {
        printf("The points are collinear.\n");
    }
    else 
    { printf("The point is not collinear.\n");}
    
    return 0;
}
