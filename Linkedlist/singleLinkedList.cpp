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

        // 4. Insert Node after a particular node in the list

        void insertNodeAfter(Node *n, int k){

            Node* ptr = nodeExists(n -> key)
            if(ptr == NULL){
                cout << "No node exists with key value" << k << endl;
            }else{
                if(nodeExists(n-> key) == k){
                    cout << "Node already exists with key value : " << n->key << ". Append another node with different key value";
                }else{
                    n -> next = ptr -> next;
                    ptr -> next = n;
                    cout << "Node Inserted" << endl;
                }
            }

        }

        // 5. Deleting node by unique key

        void deleteNodeByKey(int k){
            if (head == NULL){
                cout << "Singly Linked List already Empty. Cant delete" << endl;
            }else{
                if(head-> key == k){
                    head = head->next;
                    cout << "Node Unlinked with keys value : " << k << endl;
                }else{
                    Node* prevptr = head;
                    Node* currentptr = head-> next;
                    Node* temp = NULL;

                    // Finding the address of node which we have to delete
                    while(currentptr-> next != NULL){
                        if(currentptr -> key == k){
                            temp = currentptr;
                            currentptr = NULL;
                        }else{
                            currentptr = currentptr -> next;
                            prevptr = currentptr -> next;
                        }
                    }
                    
                    // using address we unlink the node
                    if(temp != NULL){
                        prevptr -> next = temp -> next;
                        cout << "Node unlinked with key value : " << k << endl;
                    }else{
                        cout << "Node doesn't Exists" << endl;
                    }
                }
            }
        }

        // 6. Update Node by key

        void updateNodeByKey(int k, int d){

            Node* ptr = nodeExists(k);
            if (ptr != NULL){
                ptr -> data = d;
                cout << "Node data updated successfully" << endl;
            }else{
                cout << "Node doesn't Exists with key value : "<< k << endl;
            }
            }
        }

        // 7. printing the Linked lists

        if(head == NULL){
            cout << "No nodes in singly linked list" << endl;
        }else{
            cout << "Singly linked list values: " << endl;
            Node* temp = head;

            while(temp != NULL){
                cout << "["<< temp-> key << "|" << temp->data << "] --> ";
                temp = temp->next; 
            }
        }
};

int main() {

    return 0;
}