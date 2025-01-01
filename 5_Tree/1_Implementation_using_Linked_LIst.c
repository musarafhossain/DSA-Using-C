#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{       
    int data;
    struct node *left, *right;
};

struct node * Create(void);

void main(){
    struct node *root;
    root = 0;
    root = Create();
}

struct node * Create(){
    int x;
    struct node *newnode;
    printf("\nEnter Data (-1 for no node) : ");
    scanf("%d", &x);
    if(x==-1)
        return 0;
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->data = x;
    printf("\nEnter Left Child of %d :- ", x);
    newnode->left = Create();
    printf("\nEnter Right Child of %d :- ", x);
    newnode->right = Create();
    return newnode;
}