#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    int a=5;
    int b=4;
    cout<<a<<endl;
    cout<<b<<endl;
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"After Swap"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    
    cout<<"Swap using temp"<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<endl;
    cout<<b<<endl;
    
    
    
    cout<<"Swap using XOR"<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<endl;
    cout<<b<<endl;
    
    cout<<"Swap function"<<endl;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}