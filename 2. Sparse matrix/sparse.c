// sparse matrix to effective matrix
#include <stdio.h>
void main()
{
    int i, j, k, m, n, a[10][10], b[10][10], count = 0;
    printf("Enter the number of rows and columns of the matrix:");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the matrix:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element :");
            scanf("%d", &a[i][j]);
            if (a[i][j] != 0)
            {
                count++;
            }
        }
    }
    b[0][0] = m;
    b[0][1] = n;
    b[0][2] = count;
    k = 1;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }
    }
    for (i = 0; i < count + 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}
