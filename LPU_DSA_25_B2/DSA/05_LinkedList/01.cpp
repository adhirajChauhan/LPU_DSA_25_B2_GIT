#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node* &head, int val){
    Node* n = new Node(val);

    if(head ==  NULL){
        head = n;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtBeginning(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void insertAtPosition(Node* &head, int pos, int val){
    if(pos == 0){
        insertAtBeginning(head, val);
    }
    Node *n = new Node(val);
    Node *temp = head;

    for(int i = 0; i < pos - 1; i++){
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}

void deleteFromEnd(Node* &head){
    if(head==NULL) return;

    if(head ->next == NULL){ //there is one node
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void deleteFromBeginning(Node* &head){

    if(head == NULL) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteFromPosition(Node* &head, int pos){
    if(head == NULL) return;
    if(pos == 0){
        deleteFromBeginning(head);
    }
    Node* temp = head;
    for(int i  = 0; i < pos - 1; i++){
        temp = temp->next;
    }
    Node* toDel = temp->next;
    temp->next = temp->next->next;
    delete toDel;
}

bool search(Node* head, int key){

}

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
 
int main()
{
    // Node* a = new Node(10);
    // Node* b = new Node(20);

    // a -> next = b;

    Node* head = NULL;
    insertAtEnd(head, 5);
    insertAtEnd(head, 10);
    insertAtEnd(head, 15);
    insertAtEnd(head, 25);

    insertAtBeginning(head, 1);

    insertAtPosition(head,2,22);

    printList(head);
}