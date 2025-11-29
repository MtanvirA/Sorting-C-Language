#include <stdio.h>

void swap(int n, int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void buildEnNumber(int n, int arr[])
{
    int i = n - 1;
    swap(n, arr, i, i-1);
    while (arr[i] == arr[i - 1])
    {
        swap(n, arr, i-1, i-2);
        i--;
    }
}

int buildNumber(int n, int arr[])
{
    int sum = 0;
    int mul = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        sum += arr[i] * mul;
        mul *= 10;
    }
    return sum;
}

void insertionSort(int n, int arr[])
{
    for (int i = 1; i <= n - 1; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(n, arr, j, j - 1);
            j--;
        }
    }
}

void printArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
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
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    // taking the array as input
    printf("Enter the elements of the array: \n");
    setArray(n, arr);

    // print the original array
    printf("The main array: \n");
    printArray(n, arr);

    // sort the array
    insertionSort(n, arr);

    // check the sorted array
    printf("\nThe sorted array: \n");
    printArray(n, arr);

    //minimum number from array
    int result = buildNumber(n, arr);

    //enhanced array
    buildEnNumber(n, arr);

    //enhanced number
    int result2 = buildNumber(n, arr);

    //final answer: minimum sum
    printf("\nThe minimum sum: %d", result+result2);
    return 0;
}