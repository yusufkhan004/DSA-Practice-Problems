#include <iostream>
using namespace std;

class Node{

    public:
        int key;
        int data;
        Node* next;

        // constructors
        Node{
            key = 0;
            data = 0;
            next = NULL;
        }

        // parametrized constructors
        Node(int k, int d){
            key = k;
            data = d;
        }
};

class singlyLinkedList{
    public:
        Node* head;

        singlyLinkedList(){
            head = NULL;
        }
        singlyLinkedList(Node *n){
            head = n;
        }

        // 1. check if Node exsits using key Value
        Node* nodeExists(k){

            Node* temp = NULL;
            Node* ptr = head;

            while(ptr != NULL){
                if (ptr -> key == k){
                    temp = ptr;
                }
                ptr = ptr -> next;
            }

            return temp;
        }

        // 2. Append a node to the list

        void appendNode(Node *n) {

            if(nodeExists(n -> key) != NULL){
                cout << "Node already exists with key value : " << n->key << ". Append another node with different key value";
            }else{

                if(head == NULL){
                    head = n;
                    cout << "Node appended";
                }else{
                    Node* ptr = head;

                    while(ptr->next != NULL){
                        ptr = ptr -> next;
                    }
                    ptr -> next = n;

                    cout << "Node appended";
                }
            }
        }

        // 3. prepend Node - attach a node at the start
        void prepend(Node *n){

            if(nodeExists(n -> key) != NULL){
                cout << "Node already exists with key value : " << n->key << ". Append another node with different key value";
            }else{
                n -> next = head;
                head = n;
                cout << "Node prepended";
            }
        }
};

int main() {

    return 0;
}