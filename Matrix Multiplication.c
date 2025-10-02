#include <stdio.h>

int main() 
{
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q, i, j, k;

    printf("Enter rows and columns of A: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of B: ");
    scanf("%d %d", &p, &q);

    if(n != p) 
    {
        printf("Multiplication not possible.\n");
        return 0;
    }

    printf("Enter Matrix A:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter Matrix B:\n");
    for(i = 0; i < p; i++)
        for(j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < m; i++)
        for(j = 0; j < q; j++) 
        {
            C[i][j] = 0;
            for(k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("Resultant Matrix:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < q; j++)
            printf("%4d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
