#include <iostream>
using namespace std;

//user defined data type
class Node{

    public:
        int key;
        int data;
        Node* next;

        // constructors
        Node(){
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

class SinglyLinkedList{
    public:
        Node* head;

        SinglyLinkedList(){
            head = NULL;
        }
        SinglyLinkedList(Node *n){
            head = n;
        }

        // 1. check if Node exsits using key Value
        Node* nodeExists(int k){

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
                cout << "Node already exists with key value : " << n->key << ". Append another node with different key value"<< endl;
            }else{

                if(head == NULL){
                    head = n;
                    cout << "Node appended" << endl;
                }else{
                    Node* ptr = head;

                    while(ptr->next != NULL){
                        ptr = ptr -> next;
                    }
                    ptr -> next = n;

                    cout << "Node appended" << endl;
                }
            }
        }

        // 3. prepend Node - attach a node at the start
        void prependNode(Node *n){

            if(nodeExists(n -> key) != NULL){
                cout << "Node already exists with key value : " << n->key << ". Append another node with different key value" << endl;
            }else{
                n -> next = head;
                head = n;
                cout << "Node prepended" << endl;
            }
        }

        // 4. Insert Node after a particular node in the list

        void insertNodeAfter(Node *n, int k){

            Node* ptr = nodeExists(k);
            if(ptr == NULL){
                cout << "No node exists with key value" << k << endl;
            }else{
                if(nodeExists(n-> key) != NULL){
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
                    while(currentptr != NULL){
                        if(currentptr -> key == k){
                            temp = currentptr;
                            currentptr = NULL;
                        }else{
                            prevptr = prevptr -> next;
                            currentptr = currentptr -> next;
                        }
                    }
                    
                    // using address we unlink the node
                    if(temp != NULL){
                        prevptr -> next = temp -> next;
                        cout << "Node unlinked with key value : " << k << endl;
                    }else{
                        cout << "Node doesn't Exists with key value : " << k << endl;
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
        

        // 7. printing the Linked lists
        void printList() {
            if(head == NULL){
                cout << "No nodes in singly linked list" << endl;
            }else{
                cout << "Singly linked list values: " << endl;
                Node* temp = head;

                while(temp != NULL){
                    cout << "["<< temp -> key << "|" << temp->data << "] --> ";
                    temp = temp->next; 
                }
            }
        }
        
};

int main() {

    SinglyLinkedList s;

    int choice,key1,k1,data1;

    do{
        cout << "\n What operation do you want to perform? select option number. Enter 0 to exist"<< endl;
        cout << "1. appendNode()" << endl;
        cout << "2. prependNode()" << endl;
        cout << "3. insertNodeAfter()" << endl;
        cout << "4. deleteNodeByKey()" << endl;
        cout << "5. updateNodeByKey()" << endl;
        cout << "6. print()" << endl;
        cout << "7. Clear Screen" << endl;
        cout << "0. Exit" << endl;

        cin >> choice;
        Node* n1 = new Node();
        //new keyword is used for dynamic memory allocation on heap memory and it pretty much global
        switch (choice) {
            case 0: break;
            case 1: cout << "Append Node Operation \n Enter key & data of the Node to be appended" << endl;
            cin >> key1;
            cin >> data1;
            n1 -> key = key1;
            n1 -> data = data1;
            s.appendNode(n1);
            break;
            case 2: cout << "prepend Node Operation \n Enter key & data of the Node to be appended" << endl;
            cin >> key1;
            cin >> data1;
            n1 -> key = key1;
            n1 -> data = data1;
            s.prependNode(n1);
            break;
            case 3 : cout << "Insert Node After the opeartion \n Enter key of existing Node after which you want to insert this New Node: "<< endl;
            cin >> k1;
            cout << "Enter the key and data value pair" << endl; 
            cin >> key1;
            cin >> data1;
            n1-> key = key1;
            n1-> data = data1;
            s.insertNodeAfter(n1, k1);
            break;
            case 4 : cout << "Delete Node By Key Operation - \nEnter the key Node to be deleted: "<< endl;
            cin >> k1;
            s.deleteNodeByKey(k1);
            break;
            case 5 : cout << "Update Node By Key Operation - \n Enter the Key & NEW data to be Updated: " << endl;
            cin >> k1;
            cin >> data1;
            s.updateNodeByKey(k1, data1);
            break;
            case 6 : s.printList();
            break;
            case 7 : system("cls");
            break;
            default : cout << "Enter Proper Option Number";
        }
    }while(choice != 0);

    return 0;
}