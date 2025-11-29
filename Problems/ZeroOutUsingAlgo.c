#include <stdio.h>

void swap(int n, int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void zeroOut(int n, int arr[])
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j] == 0)
            {
                swap(n, arr, j, j+1);
            }
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

    int arr[n];

    printf("Enter the elements of the array: ");
    setArray(n, arr);

    printf("The given array: ");
    printArray(n, arr);

    zeroOut(n, arr);

    printf("The required array: ");
    printArray(n, arr);

    return 0;
}