#include <iostream>
#include <unordered_map>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        next = NULL;
    }
};

bool cycleExist(node *head){

    unordered_map<node *, bool> hashtables;

    node * temp = head;

    while(temp -> next !=NULL){

        if(hashtables.count(temp) != 0){
            return true;
        }

        hashtables[temp] = true;
        temp = temp -> next;

    }
    return false;
}

void insertAtHead(node * &head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }

    node* n = new node(data);
    n -> next = head;
    head = n;
}

int main() {

    node *a = NULL;

    insertAtHead(a,1);
    insertAtHead(a,2);
    insertAtHead(a,3);
    insertAtHead(a,3);
    insertAtHead(a,3);

    node* temp = a->next->next->next->next;
    temp->next = a->next->next;

    if(cycleExist(temp)){
        cout << "Cycle exist in linkedList";
    }else{
        cout << "Cycle doesn't Exist";
    }

    return 0;
}
