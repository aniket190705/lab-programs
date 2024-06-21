#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, item;
    printf("Enter no. of elements");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search");
    scanf("%d", &item);
    int high = n - 1;
    int low = 0;
    int mid = (high + low) / 2;
    while (arr[mid] != item && low <= high)
    {

        if (item < arr[mid])
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }

        else
        {
            low = mid + 1;
            mid = (low + high) / 2;
        }
    }
    if (item == arr[mid])
    {
        printf("%d found at %d position", item, mid + 1);
    }
    else
    {

        printf("Element not found");
    }

    return 0;
}
