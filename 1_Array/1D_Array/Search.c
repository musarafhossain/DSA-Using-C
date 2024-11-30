#include <stdio.h>
#include <conio.h>

// declare array
#define ARRAY_SIZE 10
int arr[ARRAY_SIZE] = {5, 7, 6, 9, 3, 77, 1, 5, 1, 9};

// define function prototype
void Search(int);

// main function
void main()
{
    Search(77);
}

//search function definiton
void Search(int value){
    int i=0, isFound=0;
    while(i!=ARRAY_SIZE){
        if(arr[i]==value){
            isFound=1;
            break;
        }
        i++;
    }
    if(isFound)
        printf("\n%d found at position %d", value, i+1);
    else
        printf("\n%d not found", value);
}