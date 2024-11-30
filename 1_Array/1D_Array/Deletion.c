#include<stdio.h>
#include<conio.h>

#define ARRAY_SIZE 10
int arr[ARRAY_SIZE] = {10,20,30,40,50,60,70,80,90,100};

void Delete(int);
void Traverse(void);

int main(){
    printf("\nBefore Deletion : \n");
    Traverse();
    Delete(50);
    Delete(10);
    printf("\nAfter Deletion : \n");
    Traverse();
    //getch();
}

void Delete(int value){
    int i=0;
    while(i!=ARRAY_SIZE){
        if(arr[i]==value){
            break;
        }
        i++;
    }
    for(int j = i; j<ARRAY_SIZE; j++){
        arr[j] = arr[j+1];
    }
}

void Traverse()
{
    for (int i = 0; arr[i]!='\0'; i++)
    {
        printf("%d   ", arr[i]);
    }
}