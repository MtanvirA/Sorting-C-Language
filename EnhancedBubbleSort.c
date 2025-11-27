#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        bool sort = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sort = false;
            }
        }
        if (sort == true)
        {
            break;
        }
    }
}

void printArray(int n, int arr[])
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The unsorted array: ");
    printArray(n, arr);

    bubbleSort(n, arr);

    printf("The sorted array: ");
    printArray(n, arr);

    return 0;
}