#include <bits/stdc++.h>
using namespace std;

int main()
{
    // const data, non-const pointer
    const int *a = new int (2);
    cout<<*a<<endl;
    // *a=5;    //(not possible because data is const)
    // cout<<*a<<endl;
    
    int b = 20;
    a = &b;
    
    cout<<*a<<endl<<endl;
    
    
    // const pointer, non-const data
    int *const p = new int (5);
    cout<<*p<<endl;
    *p = 10;
    cout<<*p<<endl<<endl;
    
    // p=&b;    //(not possible because pointer p is const)
    // cout<<*p<<endl;
    
    
    
    // const pointer, const data
    
    const int *const x = new int(50);
    cout<<*x<<endl;
    
    // *x=100;      //(not possible because data is const)
    // cout<<*x<<endl;
    
    // x = &b;      //(not possible because pointer x is const)
    // cout<<*x<<endl;
    

    return 0;
}