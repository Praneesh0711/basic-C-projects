#include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3, maximum;

    printf("Enter length and breadth of Rectangle 1: ");
    scanf("%d %d", &l1, &b1);

    printf("Enter length and breadth of Rectangle 2: ");
    scanf("%d %d", &l2, &b2);

  
    printf("Enter length and breadth of Rectangle 3: ");
    scanf("%d %d", &l3, &b3);

 
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    
    maximum = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);


    printf("The highest perimeter is: %d\n", maximum);

    return 0;
}
