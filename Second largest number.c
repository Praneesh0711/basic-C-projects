#include<stdio.h>
int main()
{
    int num, i;
    
    printf("Enter the number of integrs: ");
    scanf("%d", &num);
    
    int arr[1000];
    printf("Enter the numbers: \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    int second = arr[0];
    
    for(i = 1; i < num; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    for(i = 0; i < num; i++)
    {
        if(arr[i] > second && arr[i] < max)
        {
            second = arr[i];
        }
    }
    
    printf("Second largest number is: %d\n", second);
    
    return 0;
}
