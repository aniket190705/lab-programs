#include <stdio.h>
void printPascal(int n)
{
    for (int line = 1; line <= n; line++)
    {
        for (int space = 1; space <= n - line; space++)
            printf("  ");
        // used to represent C(line, i)
        int c = 1;
        for (int i = 1; i <= line; i++)
        {
            // The first value in a line
            // is always 1
            printf("%4d", c);
            c = c * (line - i) / i;
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of rows to display the traingle");
    scanf("%d", &n);
    printPascal(n);
    return 0;
}
