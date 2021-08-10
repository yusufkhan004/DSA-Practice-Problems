#include <iostream>
using namespace std;

//user defined data type
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

    singlyLinkedList s;

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

        cin >> choice;
        Node* n1 = new Node();
        //new keyword is used for dynamic memory allocation on heap memory and it pretty much global
        switch (choice) {
            case 0: break;
            case 1: cout << "Append Node Operation \n Enter key & data of the Node to be appended" << endl;
            cout << "Enter the key and data value pair" << endl; 
            cin >> key1;
            cin >> data1;
            n1 -> key = key1;
            n1 -> data = data1;
            s.appendNode(n1);
            break;
            case 2: cout << "Append Node Operation \n Enter key & data of the Node to be appended" << endl;
            cout << "Enter the key and data value pair" << endl; 
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
            default : cout << "Enter Proper Option Number";
        }
    }

    return 0;
}