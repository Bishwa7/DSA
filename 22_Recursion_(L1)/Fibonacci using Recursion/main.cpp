#include <bits/stdc++.h>
using namespace std;

int fibonacci(int num)
{
    if(num <=1) return num;
    
    return fibonacci(num-1) + fibonacci(num-2);
}


int main()
{
    //cout<<"Hello World";
    
    int terms;
    cout<<"Enter number of terms = ";
    cin>>terms;
    
    cout<<endl;
    
    for(int i=0; i<terms; i++)
    {
        cout<<fibonacci(i)<<" ";
    }

    return 0;
}