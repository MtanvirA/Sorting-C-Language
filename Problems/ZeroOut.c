#include <stdio.h>

void zeroOut(int n, int arr[], int brr[])
{
    for(int i=0; i<n; i++)
    {
        brr[i] = 0;
    }

    int idx = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            brr[idx] = arr[i];
            idx++;
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
    int brr[n];

    printf("Enter the elements of the array: ");
    setArray(n, arr);

    printf("The given array: ");
    printArray(n, arr);

    zeroOut(n, arr, brr);

    printf("The required array: ");
    printArray(n, brr);

    return 0;
}