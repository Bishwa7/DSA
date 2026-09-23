#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int _val)
    {
        this->data = _val;
        this->next = NULL;
    }
};

void insertAtBegin(int _val, Node* &head, Node* &tail)
{
    if(head == NULL)
    {
        Node* newNode = new Node(_val);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node* newNode = new Node(_val);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtEnd(int _val, Node* &head, Node* &tail)
{
    if(head == NULL)
    {
        Node* newNode = new Node(_val);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node* newNode = new Node(_val);
        tail->next = newNode;
        tail = newNode;
    }
}

int countList(Node* &head)
{
    Node* temp = head;
    int count = 0;
    
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    
    return count;
}


void insertAtPosition(int _val, int position, Node* &head, Node* &tail)
{
    int length = countList(head);
    
    
    if(position < 1 || position>length+1)
    {
        cout<<"Position not valid"<<endl;
        return;
    }
    
    if(position == 1)
    {
        insertAtBegin(_val, head, tail);
        return;
    }
    else if(position == length+1)
    {
        insertAtEnd(_val, head, tail);
        return;
    }
    else{
        Node* newNode = new Node(_val);
        Node* temp = head;
        
        for(int i=1; i<=position-2; i++)
        {
            temp = temp->next;
        }
        
        newNode->next = temp->next;
        temp->next = newNode;
    }
}


void deleteAtPosition(int position, Node* &head, Node* &tail)
{
    int length = countList(head);
    
    if(head == NULL && tail == NULL)
    {
        cout<<"List empty"<<endl;
        return;
    }
    
    if(position < 1 || position>length)
    {
        cout<<"Position not valid"<<endl;
        return;
    }
    
    if(head == tail && position == 1)
    {
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    
    if(position == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    else
    {
        Node* previous = head;
        
        for(int i=1; i<=position-2; i++)
        {
            previous = previous->next;
        }
        
        Node* current = previous->next;
        // Node* forward = current->next;
        
        // current->next = NULL;
        // previous->next = forward;
        
        
        previous->next = current->next;
        current->next = NULL;
        delete current;
        return;
    }
}

void printList(Node* head)
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

bool findElement(int target, Node* &head)
{
    Node* temp = head;
    
    while(temp != NULL)
    {
        if(temp->data == target)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}


int maxElement(Node* &head)
{
    Node* temp = head;
    int maxi = INT_MIN;
    
    while(temp != NULL)
    {
        if(temp->data >= maxi)
        {
            maxi = temp->data;
        }
        temp = temp->next;
    }
    
    return maxi;
}

int minElement(Node* &head)
{
    Node* temp = head;
    int mini = INT_MAX;
    
    while(temp != NULL)
    {
        if(temp->data <= mini)
        {
            mini = temp->data;
        }
        temp = temp->next;
    }
    
    return mini;
}


int sumList(Node* &head)
{
    Node* temp = head;
    int sum = 0;
    
    while(temp != NULL)
    {
        sum = sum + temp->data;
        temp = temp->next;
    }
    
    return sum;
}





void freelist(Node* &head, Node* &tail)
{
    Node* curr = head;
    
    while(curr != NULL)
    {
        Node* next = curr->next;    // store next node
        delete curr;                // delete current node
        curr = next;                // move to next node
    }
    head = NULL;    // reset head (important if used later)
    tail = NULL;    // to avoid dangling pointer
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    
    
    insertAtBegin(10, head, tail);
    insertAtBegin(20, head, tail);
    insertAtBegin(30, head, tail);
    insertAtBegin(40, head, tail);
    insertAtEnd(50, head, tail);
    
    printList(head);
    
    cout<<"Element Present? = "<<findElement(30, head)<<endl;
    
    cout<<"Max element in list = "<<maxElement(head)<<endl;
    cout<<"Min element in list = "<<minElement(head)<<endl;
    
    cout<<"Sum of elements in list = "<<sumList(head)<<endl;
    cout<<"Number of elements in list = "<<countList(head)<<endl;
    
    
    insertAtPosition(500, 3, head, tail);
    printList(head);
    
    deleteAtPosition(2, head, tail);
    printList(head);
    
    deleteAtPosition(1, head, tail);
    printList(head);
    
    
    deleteAtPosition(1, head, tail);
    printList(head);
    deleteAtPosition(1, head, tail);
    printList(head);
    deleteAtPosition(1, head, tail);
    printList(head);
    deleteAtPosition(1, head, tail);
    printList(head);
    deleteAtPosition(1, head, tail);
    printList(head);
    
    freelist(head, tail);
    
    return 0;
}