#include <stdio.h>

int main()
{
    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    int i, j, k = 1, p, q, r, a[n][n];
    for (i = 0; i < (n + 1) / 2; i++)
    {
        for (j = i; j < n - i; j++)
        {
            a[i][j] = k++;
        }
        for (p = i + 1; p <= n - i - 1; p++)
        {
            a[p][n - i - 1] = k++;
        }
        for (q = n - i - 2; q >= i; q--)
        {
            a[n - i - 1][q] = k++;
        }
        for (r = n - i - 2; r > i; r--)
        {
            a[r][i] = k++;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}