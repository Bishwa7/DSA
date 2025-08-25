#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    
    int a = 10;
    int *p = &a;
    int *q = p;  //copy pointer //copy of pointer p
    
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<q<<endl;
    
    cout<<&a<<endl;
    cout<<&p<<endl;
    cout<<&q<<endl;
    
    //cout<<*a<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;
    

    return 0;
}