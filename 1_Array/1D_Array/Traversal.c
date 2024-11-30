#include <stdio.h>
#include <conio.h>

// declare array
#define ARRAY_SIZE 10
int arr[ARRAY_SIZE] = {5, 7, 6, 9, 3, 77, 1, 5, 1, 9};

// define function prototype
void Traverse(void);

// main function
void main()
{
    Traverse();
    //getch();
}

// function definition
void Traverse()
{
    for (int i = 0; arr[i]!='\0' ; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}