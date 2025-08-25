#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    
    int a = 5;
    int *p = &a;
    int **q = &p;
    
    cout<<"a = "<< a <<endl;
    cout<<"&a = "<< &a <<endl;
    //cout<<"*a = "<< *a <<endl; //error a is not a pointer
    cout<<"p =  "<< p <<endl;
    cout<<"*p =  "<< *p <<endl;
    cout<<"&p = "<< &p <<endl;
    //cout<<"**p = "<< **p <<endl;  //error p is not a double pointer
    cout<<"q = "<< q <<endl;
    cout<<"&q =  "<< &q <<endl;
    cout<<"*q = "<< *q <<endl;
    cout<<"**q = "<< **q <<endl;
    //cout<<"***q = "<< ***q <<endl;  //error q is not a triple pointer
    
    
    
    
    return 0;
}