#include<stdio.h>
#include<conio.h>
#define ARRAY_SIZE 10
int arr[ARRAY_SIZE] = {1,2,3,4,5,6,7,8,9,10};

void LinearSearch(int value){
    int i, isFound=0;
    for(i=0; i<ARRAY_SIZE; i++){
        if(arr[i]==value){
            isFound = 1;
            printf("Element is present at %d position in array.", i+1);
            break;
        }
    }
    if(!isFound){
        printf("Element is not present in the array.");
    }
}

int main(){
    LinearSearch(20);
    return 0;
}