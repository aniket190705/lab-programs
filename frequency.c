#include <stdio.h>
int main()
{
    int a[100], f[100];
    int n, i, j, ctr;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        ctr = 1; // Initialize counter for each element
        if (a[i] != -1)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    ctr++;     // Increment counter for matching elements
                    a[j] = -1; // Mark the duplicate element's frequency as -1
                }
            }
            // If frequency array value is not marked as -1, set it to the counter
            f[i] = ctr;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            printf("%d occurs %d times\n", a[i], f[i]);
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {

            printf("%2d %2d", a[i], f[i]);
            for (j = 1; j <= f[i]; j++)
            {

                printf("*");
            }
        }
        printf("\n");
    }
}
