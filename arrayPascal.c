
#include <stdio.h>
#include <stdlib.h>
void computePascalTriangle(int **t, int nr)
{
    int i, j;
    for (i = 0; i < nr; i++)
    {
        t[i] = (int *)malloc((i + 1) * sizeof(int));
        t[i][0] = 1;
        for (j = 1; j < i; j++)
        {
            t[i][j] = t[i - 1][j - 1] + t[i - 1][j];
        }
        if (i > 0)
        {
            t[i][i] = 1;
        }
    }
}
void printPascalTriangle(int **t, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int i, nRows;
    int **pTriangle;
    printf("Enter the no. of rows required in Pascal Triangle: ");
    scanf("%d", &nRows);
    pTriangle = (int **)malloc(nRows * sizeof(int *));
    if (pTriangle == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    computePascalTriangle(pTriangle, nRows);
    printPascalTriangle(pTriangle, nRows);
    for (i = 0; i < nRows; i++)
    {
        free(pTriangle[i]);
    }
    free(pTriangle);
    return 0;
}
