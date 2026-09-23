#include <bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int val)
    {
        this->data = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtBegin(int val, Node* &head, Node* &tail)
{
    if(head==NULL && tail==NULL)
    {
        Node* newNode = new Node(val);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node* newNode = new Node(val);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}


void insertAtEnd(int val, Node* &head, Node* &tail)
{
    if(head==NULL && tail==NULL)
    {
        Node* newNode = new Node(val);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node* newNode = new Node(val);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int listLength(Node* &head)
{
    Node* temp = head;
    
    if(temp == NULL)
    {
        return 0;
    }
    else
    {
        int count = 0;
        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    return 0;
}

void insertAtPlace(int val, int position, Node* &head, Node* &tail)
{
    int len = listLength(head);
    
    if(position<1 || position>len+1)
    {
        cout<<"Position out of Bounds"<<endl;
        return;
    }
    else if(1 == position)
    {
        insertAtBegin(val, head, tail);
    }
    else if(position == len+1)
    {
        insertAtEnd(val, head, tail);
    }
    else
    {
        Node* newNode = new Node(val);
        Node* temp = head;
        
        for(int i=0; i<position-2; i++)
        {
            temp = temp->next;
        }
        
        Node* forward = temp->next;
        
        newNode->next = forward;
        newNode->prev = temp;
        temp->next = newNode;
        forward->prev = newNode;
    }
}


void deleteAtPlace(int position, Node* &head, Node* &tail)
{
    int len = listLength(head);
    
    if(head==NULL && tail==NULL)
    {
        cout<<"List Empty"<<endl;
        return;
    }
    else if(head == tail)
    {
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else if(position<1 || position>len)
    {
        cout<<"Position out of Bounds"<<endl;
        return;
    }
    else if(1 == position)
    {
        Node* temp = head;
        head = head->next;  // moving head
        head->prev = NULL;  // isolating temp
        temp->next = NULL;  // isolating temp
        delete temp;
    }
    else if(position == len)
    {
        Node* temp = tail;
        tail = tail->prev;  // moving tail
        tail->next = NULL;  // isolating temp
        temp->prev = NULL;  // isolating temp
        delete temp;
    }
    else
    {
        Node* curr = head;
        
        for(int i=0; i<position-1; i++)
        {
            curr = curr->next;
        }
        
        Node* one = curr->prev;
        Node* two = curr->next;
        
        one->next = two;
        two->prev = one;
        
        curr->next = NULL;
        curr->prev = NULL;
        
        delete curr;
    }
}



void printList(Node* &head)
{
    Node* temp = head;
    
    cout<<"NULL<-> ";
    while(temp != NULL)
    {
        cout<< temp->data <<" <-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


void printListRev(Node* &tail)
{
    Node* temp = tail;
    
    cout<<"NULL <-> ";
    while(temp != NULL)
    {
        cout<< temp->data<<" <-> ";
        temp = temp->prev;
    }
    cout<<"NULL"<<endl;
}


void freeList(Node* &head, Node* &tail)
{
    Node* curr = head;
    
    while(curr != NULL)
    {
        Node* next = curr->next;
        delete curr;
        curr = next;
    }
    head = NULL;
    tail = NULL;
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    
    insertAtBegin(10, head, tail);
    insertAtBegin(20, head, tail);
    insertAtBegin(30, head, tail);
    insertAtEnd(40, head, tail);
    insertAtPlace(420, 3, head, tail);
    
    cout<<"list size = "<<listLength(head)<<endl;
    printList(head);
    
    
    deleteAtPlace(4, head, tail);
    printList(head);
    printListRev(tail);
    
    freeList(head, tail);


    return 0;
}