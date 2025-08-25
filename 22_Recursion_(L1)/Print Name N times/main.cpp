#include <bits/stdc++.h>
using namespace std;


void printName(int n)
{
    if(n==0) return;
    cout<<"Bishwanath"<<endl;
    printName(n-1);
}


int main()
{
    //cout<<"Hello World";
    
    int n;
    cout<<"Enter number = ";
    cin>>n;
    
    printName(n);

    return 0;
}