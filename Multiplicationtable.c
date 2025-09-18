#include<stdio.h>
int main()
{
    int num;
    
    printf("Enter the number for multi: ");
    scanf("%d", &num);
    
    printf("the multiplication table for %d: \n", num);
    
    for( int i = 1; i < 11; i++)
    { printf("%d * %d = %d\n", num, i, num * i);}
    
return 0;

}
