#include<stdio.h>
int main()
{
	int n, i;
	int arr[10000];

	int positive = 0, negative = 0, odd = 0, even = 0;

	printf("how many numbers: ");
	scanf("%d", &n);

	printf("ENter the numbers: \n");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);

		if(arr[i] > 0)
			positive++;
		else if(arr[i] < 0)
			negative++;

		if(arr[i] % 2 ==0)
			even++;
		else
			odd++;

	}


	printf("ositive numbers: %d\n", positive);
	printf("negative numbers: %d\n", negative);
	printf("even numbers: %d\n", even);
	printf("odd numbers: %d\n", odd);


	return 0;
}
