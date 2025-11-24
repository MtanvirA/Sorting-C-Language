#include<stdio.h>
int main(){

    int arr[10] = {2, 5, 7, 9, 10, 4, 6, 8, 8, 3};
    int brr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int pos;

    for(int i=0; i<10; i++){
        if(brr[arr[i]] == 0){
            brr[arr[i]] = 1;
        } 
        else{
            pos = i;
            break;
        }
    }

    printf("The duplicate element is: %d", arr[pos]);
    return 0;
}