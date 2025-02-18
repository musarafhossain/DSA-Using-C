#include<stdio.h>
#include<string.h>
#define ARRAY_SIZE 6
int arr[ARRAY_SIZE] = {5,4,10,1,6,2};

void InsertionSort(){
    for(int i = 1; i<ARRAY_SIZE; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

void Display(){
    for(int i=0;i<ARRAY_SIZE;i++){
        printf("%d  ", arr[i]);
    }
}

int main(){
    printf("Before Sort :- ");
    Display();
    InsertionSort();
    printf("\nAfter Sort :- ");
    Display();
    return 0;
}