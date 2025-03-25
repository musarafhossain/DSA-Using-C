#include<stdio.h>
#include<conio.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;

int isFull(){
    return rear==N-1;
}

int isEmpty(){
    return front==-1 && rear==-1;
}

void enqueue(int X){
    if(isFull())
        printf("\nOverflow.");
    else if(isEmpty()){
        front = rear = 0;
        queue[rear] = X;
    } else{
        rear++;
        queue[rear] = X;
    }
}

void dequeue(){
    if(isEmpty())
        printf("\nUnderflow.");
    else if(front == rear){
        printf("\nDeleted Item : %d", queue[front]);
        front = -1;
        rear = -1;
    } else {
        printf("\nDeleted Item : %d", queue[front]);
        front++;
    }
}

void display(){
    if(isEmpty())
        printf("\nQueue is empty.");
    else{
        printf("\nQueue Elements :- ");
        for(int i=front;i<rear+1;i++)
            printf("%d  ", queue[i]);
    }
}

void peek(){
    if(isEmpty())
        printf("\nQueue is empty.");
    else
        printf("\nPeek Element : %d", queue[front]);
}

int main(){
    enqueue(0);
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    peek();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    dequeue();
    dequeue();
    printf("\nFront : %d, Rear : %d", front, rear);
    display();
    return 0;
}