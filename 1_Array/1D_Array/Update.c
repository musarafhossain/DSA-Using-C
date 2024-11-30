#include <stdio.h>
#include <conio.h>

// declare array
#define ARRAY_SIZE 10
int arr[ARRAY_SIZE] = {5, 7, 6, 9, 3, 77, 1, 5, 1, 9};

// define function prototype
void Update(int, int);
void Traverse(void);

// main function
int main(){
    printf("\nBefore Update : \n");
    Traverse();
    Update(2, 99);
    printf("\nAfter Update : \n");
    Traverse();
    getch();
}

void Update(int pos, int value){
    arr[pos-1] = value;
}

void Traverse()
{
    for (int i = 0; arr[i]!='\0'; i++)
    {
        printf("%d   ", arr[i]);
    }
}