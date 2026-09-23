#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    
    int a = 5;
    cout<<&a<<endl;
    
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<sizeof(ptr)<<endl;
    
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    
    
    ptr = ptr + 2;
    
    cout<<ptr<<endl;
    
    // int **hello = &ptr;
    // cout<<**hello<<endl;
    
    
    
    // long val = 2010;
    // long *ltr = &val;
    // cout<<&val<<" ----- "<<ltr<<endl;
    

    
    

    return 0;
}