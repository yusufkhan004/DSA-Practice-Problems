#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
    int data;
    struct node* next;
};

void insertAtTail(struct node** head, int value){

    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp -> data = value;
    temp -> next = NULL;
    if(*head == NULL){
        *head = temp;
    }else{
        struct node* ptr = *head;
        while(ptr-> next!= NULL){
            ptr = ptr -> next;
        }
        ptr-> next = temp;
    }
}

void makeCycle(struct node** head, int limit){
    struct node* end = *head;
    struct node* pos;
    
    int count = 1;
    while(end-> next !=NULL){
        if(count == limit){
            pos = end;
        }
        end = end-> next;
        count++;
    }

    end-> next = pos;

}

bool detectCycle(struct node** head){
    struct node* fast = *head;
    struct node* slow = *head;
    while(fast != NULL && fast-> next !=NULL){
        fast = fast->next->next;
        slow = slow-> next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}

void removeCycle(struct node** head){
    struct node* fast = *head;
    struct node* slow = *head;
    while(slow != fast){
        slow = slow -> next;
        fast = fast -> next;
    }

    fast = *head;

    while(slow -> next = fast -> next){
        slow = slow -> next;
        fast = fast -> next;
    }

    slow-> next = NULL;
}

int main(){

    struct node* head = NULL;

    insertAtTail(&head,1);
    insertAtTail(&head,2);
    insertAtTail(&head,3);
    insertAtTail(&head,4);
    insertAtTail(&head,5);
    insertAtTail(&head,6);
    insertAtTail(&head,7);
    makeCycle(&head, 3);
    removeCycle(&head);
    // if(detectCycle(&head)){
    //     printf("Loops exists in LL");
    // }else{
    //     printf("Loops does not exist in LL");
    // }
struct node *it = head;
    while(it != NULL){
        printf("%d -> ",it->data);
        it = it->next;
    }
    printf("NULL");


    return 0;
}