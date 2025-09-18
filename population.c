#include <stdio.h>

int main()
{
    float population = 100000;
    float rate = 0.10;
    
    printf("The population is: \n");
    
    for( int year = 1; year < 11; year++)
    { population = population + (population * rate); printf("%d %.0f\n", year, population);}
    
    return 0;
}
