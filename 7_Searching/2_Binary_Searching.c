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
        for(int j=0;j<ARRAY_SIZE-1;j++){
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

void BinarySearch(int value){
    int l=0, r=ARRAY_SIZE-1;
    while (l <= r) { 
        int mid = l + (r - l) / 2; 
        if(value == arr[mid]){
            printf("\nElement is present at index %d in array.", mid);
            return;
        }else if( value<arr[mid] ){
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    printf("\nElement is not present in the array.");
}

int main(){
    BubbleSort();
    Display();
    BinarySearch(4);
    return 0;
}