#include<stdio.h>
#include<conio.h>
#define ARRAY_SIZE 10
int arr[ARRAY_SIZE] = {1,2,3,4,5,6,7,8,9,10};

int LinearSearch(int value){
    for(int i=0; i<ARRAY_SIZE; i++){
        if(arr[i]==value)
            return i+1;
    }
    return -1;
}

int main(){
    int add = LinearSearch(10);
    if(add==-1){
        printf("Element is not present in the array.");
    }else{
        printf("Element is present at %d position in array.", add);
    }
    return 0;
}