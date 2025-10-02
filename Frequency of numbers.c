#include<stdio.h>
int main()
{
    int n, i, search, count = 0;
    int arr[100];
    
    printf("How many numbers: ");
    scanf("%d", &n);
    
    printf("ENter the numbers:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
    }
    
    printf("ENter the number to find the frequency: ");
    scanf("%d", &search);
    
    for(i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {
            count++;
        }
    }
    
    printf("Frequency of %d is: %d\n", search , count);
    
    return 0;
}
