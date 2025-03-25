#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

int isEmpty(){
    return front==NULL;
}

void enqueue(int X){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("\nMemory allocation failed!");
        return;
    }
    newnode->data = X;
    newnode->next = NULL;
    if(isEmpty()){
        front = newnode;
        rear = newnode;
    } else{
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue(){
    struct node *temp;
    if(isEmpty()){
        rear == NULL;
        printf("\nUnderflow!");
    } else{
        printf("\nDeleted Item : %d", front->data);
        temp=front;
        front = front->next;
        free(temp);
    }
}

void display(){
    struct node *temp;
    if(isEmpty()){
        printf("\nQueue is Empty!");
    } else{
        temp=front;
        printf("\nQueue Elements : ");
        while(temp!=NULL){
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void peek(){
    if(isEmpty()){
        printf("\nQueue is Empty!");
    } else{
        printf("\nTop Item : %d", front->data);
    }
}

int main(){
    enqueue(0);
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    peek();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    return 0;
}