#include<stdio.h>
#include<conio.h>

#define ARRAY_SIZE 10
int arr[ARRAY_SIZE] = {5,7,5,7};

void Insert(int, int);
void Traverse(void);

int main(){
    printf("\nBefore Insertion : \n");
    Traverse();
    Insert(2, 50);
    printf("\nAfter Insertion : \n");
    Traverse();
    //getch();
}

void Insert(int pos, int value){
    int i;
    for(i=ARRAY_SIZE-1; i>=pos; i--){
        arr[i] = arr[i-1];
    }
    arr[i] = value;
}

void Traverse()
{
    for (int i = 0; arr[i]!='\0'; i++)
    {
        printf("%d   ", arr[i]);
    }
}