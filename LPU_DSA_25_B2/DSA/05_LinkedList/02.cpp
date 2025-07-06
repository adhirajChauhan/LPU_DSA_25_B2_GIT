#include<iostream>
using namespace std;
 
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
} ;

void insertAtEnd(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp= temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void deleteFromEnd(Node* &head){

    if(head == NULL) return;

    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
}

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " <-->";
        temp = temp->next;
    }
    cout << "NULL\n";
}
int main()
{
 Node* head = NULL;
 insertAtEnd(head, 5);
 insertAtEnd(head, 15);
 insertAtEnd(head, 25);

 printList(head);

}