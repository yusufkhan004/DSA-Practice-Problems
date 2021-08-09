#include<stdio.h>
#include <stdlib.h>

void createNode(int);
void traverse();

struct node{
        int data;
        struct node *next;
    };

struct node *head;

void main() {

    int choice,data;

    do{
        printf("Enter the choice: \n 1. Create \n 2. traverse \n 3. exit\n");
        scanf("%d",&choice);

        switch(choice){
            case 1: printf("Enter the data element\n");
                    scanf("%d",&data);
                    createNode(data);
                    break;
            case 2: printf("\n");
                    printf("The Nodes are\n");
                    traverse();
                    break;
            case 3: printf("\n");
                    printf("Exiting...\n");
                    exit(0);
                    break;
            default: printf("Enter the correct number\n");
        }
    }while(choice != 3);

}

void createNode(int item){
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL){
        printf("overflow\n");
    }else{
        ptr -> data = item;
        ptr -> next = head;
        head = ptr;
        printf("node inserted \n");
    }
}

void traverse(){
    struct node *ptr;

    ptr = head;
    if(ptr == NULL){
        printf("Emplty list\n");
    }else{
        printf("printing values\n");
        while(ptr != NULL){
            printf("%d ",ptr->data);
            ptr = ptr-> next;
        }
        printf("\n");
    }
}