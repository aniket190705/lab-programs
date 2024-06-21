#include <stdio.h>

void bubbleSort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Swap if the element found is greater
                // than the next element
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array before sorting: ");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    bubbleSort(array, size);

    printf("\nArray after sorting: ");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    return 0;
}
