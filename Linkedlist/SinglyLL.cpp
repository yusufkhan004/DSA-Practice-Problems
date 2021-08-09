#include <iostream.h>
using namespace std;

void createNode();
void traverse(int );

struct node{
        int data;
        struct node *next;
    };

struct node *head;

void main() {

    int choice;

    do{
        printf("Enter the choice: \n 1. Create \n 2. traverse \n 3. exit");
        scanf("%d",&choice);

        swith(choice){
            case 1: printf("Enter the data element\n");
                    scanf("%d",&data);
                    createNode(data);
                    break;
            case 2: printf("The Nodes are\n");
                    traverse();
                    break;
            case 3: printf("Exiting...");
                    exit(0);
                    break;
            default: printf("Enter the correct number\n");
        }while(choice != 3);
    }

}

void createNode(int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL){
        printf("overflow\n");
    }else{
        ptr -> data = data;
        ptr -> next = head;
        
    }
}