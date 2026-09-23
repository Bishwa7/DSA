#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    queue<int> q;
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    
    if(q.empty() == 1)
    {
        cout<<"Queue(q) is empty"<<endl;
    }
    else
    {
        cout<<"Queue(q) is not empty and q.size() = "<<q.size()<<endl;
    }
    
    
    cout<<"Front element of queue = "<<q.front()<<endl;
    cout<<"Back element of queue = "<<q.back()<<endl;
    
    queue<int> q2;
    
    q2.push(111);
    q2.push(222);
    q2.push(333);
    
    
    q.swap(q2);
    
    
    cout<<"After q.swap(q2); = "<<endl;
    cout<<"Elements of q = ";
    
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    
    
    return 0;
}