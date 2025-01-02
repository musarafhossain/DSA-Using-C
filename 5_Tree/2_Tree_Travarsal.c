#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{       
    int data;
    struct node *left, *right;
};

struct node * Create(void);
void Preorder(struct node *);
void Inorder(struct node *);
void Postorder(struct node *);

void main(){
    struct node *root;
    root = 0;
    root = Create();
    printf("\nIn-order : ");
    Inorder(root);
    printf("\nPre-order : ");
    Preorder(root);
    printf("\nPost-order : ");
    Postorder(root);
    getch();
}

void Preorder(struct node *root){
    if(root==0)
        return;
    printf("%d  ", root->data);
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(struct node *root){
    if(root==0)
        return;
    Inorder(root->left);
    printf("%d  ", root->data);
    Inorder(root->right);
}

void Postorder(struct node *root){
    if(root==0)
        return;
    Postorder(root->left);
    Postorder(root->right);
    printf("%d  ", root->data);
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
