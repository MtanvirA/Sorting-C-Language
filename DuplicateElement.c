#include<stdio.h>
int main()
{
    int arr[5] = {1, 2, 5, 4, 5};
    int pos;
    for(int i=0; i<5-1; i++){
        for(int j=i+1; j<5; j++){
            if(arr[i] == arr[j]){
                pos = i;
            }
        }
    }
    printf("Duplicate element is: %d", arr[pos]);
}