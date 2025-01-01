#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

int IsEmpty(){
    return head==NULL;
}

int InputData(){
    int data;
    printf("\nEnter number :- ");
    scanf("%d", &data);
    return data;
}

struct node * CreateNode(){
    struct node *new_node;
    new_node = (struct node *) malloc(sizeof(struct node));
    return new_node;
}

void InsertAtBeginning(int data){
    struct node *new_node;
    new_node = CreateNode();
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void InsertAfter(struct node *specific_node, int data){
    if(specific_node==NULL){
        printf("\nFailed to add.");
    }
    else{
        struct node *new_node;
        new_node = CreateNode();
        new_node->data = data;
        new_node->next = specific_node->next;
        specific_node->next = new_node;
    }
}

void InsertAtLast(int data){
    struct node *new_node, *curr_node;
    if(IsEmpty()){
        InsertAtBeginning(data);
        return;
    }
    new_node = CreateNode();
    new_node->data = data;
    new_node->next = NULL;
    curr_node = head;
    while(curr_node->next!=NULL){
        curr_node = curr_node->next;
    }
    curr_node->next = new_node;
}

void Update(struct node *specific_node, int data){
    if(specific_node==NULL){
        printf("\nError on update.");
        return;
    }
    specific_node->data = data;
}

void DeleteAtBeginning(){
    if(IsEmpty()){
        printf("\nList is empty");
    }else{
        struct node *curr_node;
        curr_node = head;
        head = curr_node->next;
        free(curr_node);
    }
}

void Delete(int value) {
    struct node *curr_node = head, *prev_node = NULL;
    if (curr_node != NULL && curr_node->data == value) {
        head = curr_node->next;
        free(curr_node); 
        return;
    }
    while(curr_node!=NULL){
        if(curr_node->data==value){
            prev_node->next = curr_node->next;
            break;
        }
        prev_node = curr_node;
        curr_node = curr_node->next;
    }
    free(curr_node);
}

void DeleteAtLast(){
    if(IsEmpty()){
        printf("\nList is empty");
        return;
    }
    struct node *curr_node = head, *prev_node;
    if(curr_node->next==NULL){
        head = NULL;
        free(curr_node);
        return;
    }
    while(curr_node->next!=NULL){
        prev_node = curr_node;
        curr_node = curr_node->next;
    }
    prev_node->next = NULL;
    free(curr_node);
}

struct node * GetNode(int value){
    struct node *curr_node;
    curr_node = head;
    while(curr_node!=NULL){
        if(curr_node->data==value)
            return curr_node;
        curr_node = curr_node->next;
    }
    return NULL;
}

void Search(int value){
    struct node *curr_node = head;
    int i=1, isFound=0;
    while (curr_node!=NULL){
        printf("%d  ", curr_node->data);
        if(curr_node->data==value){
            isFound = 1;
            break;
        }
        curr_node = curr_node->next;
        i++;
    }
    if(isFound){
        printf("\n%d found at position %d.", value, i);
    }else{
        printf("\nNot found %d.", value);
    }
}

void Display(){
    struct node *curr_node;
    curr_node = head;
    if(IsEmpty()){
        printf("\nList is empty.");
    }else{
        printf("\nList Data :- ");
        while (curr_node!=NULL){
            //printf("%d,%u  ", curr_node->data, curr_node);
            printf("%d  ", curr_node->data);
            curr_node = curr_node->next;
        }
    }
    
}

void ListSize(){
    struct node *curr_node = head;
    int i = 0;
    while (curr_node!=NULL){
        i++;
        curr_node=curr_node->next;
    }
    printf("\nList size = %d", i);
}

void main(){
    int ch, data, pos;
    while(1){
        printf("-----------Menu----------");
        printf("\n=========================");
        printf("\n0. Exit\n1. Insert at first\n2. Insert at last\n3. Insert after\n4. Update\n5. Delete at first\n6. Delete\n7. Delete at last\n8. Search\n9. Display\n10. List Size");
        printf("\nEnter your choice :- ");
        scanf("%d", &ch);
        switch (ch){
            case 0:
                exit(0);
                break;
            case 1:
                data = InputData();
                InsertAtBeginning(data);
                break;
            case 2:
                data = InputData();
                InsertAtLast(data);
                break;
            case 3:
                data = InputData();
                printf("\nEnter the value after add :- ");
                scanf("%d", &pos);
                InsertAfter(GetNode(pos), data);
                break;
            case 4:
                data = InputData();
                printf("\nEnter the value which will update :- ");
                scanf("%d", &pos);
                Update(GetNode(pos), data);
                break;
            case 5:
                DeleteAtBeginning();
                break;
            case 6:
                printf("\nEnter the value which will delete :- ");
                scanf("%d", &pos);
                Delete(pos);
                break;
            case 7:
                DeleteAtLast();
                break;
            case 8:
                printf("\nEnter the value which will search :- ");
                scanf("%d", &pos);
                Search(pos);
                break;
            case 9:
                Display();
                break;
            case 10:
                ListSize();
                break;
            default:
                printf("\nInvalid Input.");
                break;
        }
        getch();
        system("cls");
    }
    getch();
}