#include<stdio.h>
int main()
{
    int target = 25;

    int arr[10] = {1, 2, 3, 4, 5, 7, 10, 20, 27, 30};

    int i=0;
    int j=10-1;

    while(i<j){

        if(arr[i]+arr[j] == target){
            break;
        }
        else if(arr[i]+arr[j] > target){
            j--;
        }
        else
        {
            i++;
        }
    }

    printf("The elements are: %d %d", arr[i], arr[j]);

    return 0;
}