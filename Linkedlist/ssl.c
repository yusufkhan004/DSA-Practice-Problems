#include<stdio.h>
#include<stdlib.h>

struct node {
        int data;
        struct node *next;
    };

void insertion(struct node** list, int value){

    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = value;
    temp-> next = NULL;
    if(*list == NULL){
        *list = temp;
    }
    else{
        struct node* pt = *list;
        while(pt -> next != NULL){
            pt = pt->next;
        }
        pt-> next = temp;
    }
}

int main(){

    int data;
    struct node *head = NULL;
    // head = (struct node *) malloc (sizeof(struct node *));
    // head -> data =  1;
    // head->next = NULL;

    int n = 0;
    while(n <= 2){

        scanf("%d",&data);
        insertion(&head,data);
        n++;
    }

    struct node *it = head;

    while(it != NULL){
        printf("%d -> ",it->data);
        it = it->next;
    }

    return 0;
}