#include <stdio.h>

void selectionSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        int pos = -1;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] <= min)
            {
                min = arr[j];
                pos = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
}

void selectionSortSpecial(int n, int arr[], int k)
{
    for (int i = 0; i < k - 1; i++)
    {
        int min = arr[i];
        int pos = -1;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] <= min)
            {
                min = arr[j];
                pos = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
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

void setArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main()
{

    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int k;
    printf("Enter the Kth value: ");
    scanf("%d", &k);

    int arr[n];

    printf("Enter the elements of the array: ");
    setArray(n, arr);

    printf("The unsorted array: ");
    printArray(n, arr);


    selectionSort(n, arr);

    printf("The sorted array: ");
    printArray(n, arr);
    
    selectionSortSpecial(n, arr, k);

    printf("The Kth smallest element: %d", arr[k-1]);
    

    return 0;
}