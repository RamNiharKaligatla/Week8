#include <stdio.h>

int main()
{
    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    int i, j, a[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }

    i = n / 2;
    j = n - 1;

    for (int k = 1; k <= n * n; k++)
    {
        if (a[i][j])
        {
            i++;
            j -= 2;
        }
        if (i < 0)
        {
            i += n;
        }
        if (j >= n)
        {
            j -= n;
        }

        if (j < 0)
        {
            j += n;
        }
        if (i >= n)
        {
            i -= n;
        }

        a[i][j] = k;

        i--;
        j++;
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