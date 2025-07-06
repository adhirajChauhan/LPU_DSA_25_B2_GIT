#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        n -> next = n;
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != head){
        temp= temp->next;
    }
    n->next = head;
    temp->next = n;
}

void insertAtBeginning(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        n ->next = n;
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    n->next = head;
    temp -> next = n;
    head = n;
}

void deleteFromEnd(Node* &head){
    if(head==NULL) return;

    if(head->next = head){
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next->next != head){
        temp = temp->next;
    }
    Node* toDel = temp->next;
    temp-> next = head;
    delete toDel;
}

void printList(Node* head){
    if(head == NULL){
        cout << "List is empty\n";
        return;
    }
    Node* temp = head;
    do{
        cout << temp->data << " -> ";
        temp = temp->next;
    }while(temp!= head);

    cout << "back to head\n";
}

 
int main()
{
 
}