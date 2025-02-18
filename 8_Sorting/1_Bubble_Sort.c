#include<stdio.h>
#include<string.h>
#define ARRAY_SIZE 10
int arr[ARRAY_SIZE] = {6,7,2,10,8,1,4,9,5,3};

void Swap(int *a, int *b){
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
}

void BubbleSort(){
    for(int i = 0; i<ARRAY_SIZE-1; i++){
        for(int j=0;j<ARRAY_SIZE-1-i;j++){
            if(arr[j]>arr[j+1])
                Swap(&arr[j], &arr[j+1]);
        }
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
    BubbleSort();
    printf("\nAfter Sort :- ");
    Display();
    return 0;
}