#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
    
};
void insertathead(node* &head, int val){
    node* newnode = new node(val);
    if(head == NULL){
        head = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

void insertattail(node* &head, int val){

    node* newnode = new node(val);
    if(head == NULL){
        head = newnode;
        return;
    }
    node* curr = head;
    while (curr->next != NULL) curr = curr->next;
    
    curr->next = newnode;
}

void insertafterindex(node* &head, int val, int insertat){
    node* newnode = new node(val);

    if(head == NULL){
        head = newnode;
        return;
    }
    
    node* curr = head; 

    while(--insertat){
        curr = curr->next;
    }

    node* halfpart =  curr->next->next;
    curr->next = newnode;
    newnode->next = halfpart;
    
}
    

int main(){
    node* head = new node(6);
    node* n1 = new node(7);
    node* n2 = new node(8);
    node* n3 = new node(9);
    node* n4 = new node(10);
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    insertattail(head, 12);

    insertathead(head, 1);


    insertafterindex(head, 23, 3);

    while (head != NULL){
        cout << head -> data << " ";
        head = head->next;
    }
    
}

