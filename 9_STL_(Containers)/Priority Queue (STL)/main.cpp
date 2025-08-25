#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    priority_queue<int> pq;
    
    pq.push(10);
    pq.push(25);
    pq.push(50);
    pq.push(21);
    
    
    if(pq.empty() == 1)
    {
        cout<<"pq is empty"<<endl;
    }
    else
    {
        cout<<"Top element(highest priority element) of pq = "<<pq.top()<<endl;
    }
    
    
    pq.pop();
    cout<<"Top of pq after pop() "<<pq.top()<<endl;
    
    cout<<"Size of pq = "<<pq.size()<<endl;
    
    
    
    
    
    priority_queue<int>pq2;
    pq2.push(71);
    pq2.push(30);
    pq2.push(99);
    pq2.push(2);
    
    
    
    
    
    pq.swap(pq2);
    
    cout<<"Elements of pq after pq.swap(pq2); = ";
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    cout<<endl;
    
    cout<<"Elements of pqmin after pq.swap(pq2); = ";
    while(!pq2.empty())
    {
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    
    cout<<endl;
    
    
    cout<<endl<<"Priority queue(pqmin) with minimun number as the highest prority = "<<endl;
    
    priority_queue<int, vector<int>, greater<int>> pqmin;
    
    pqmin.push(35);
    pqmin.push(99);
    pqmin.push(11);
    pqmin.push(54);
    pqmin.push(7);
    
    
    cout<<"Top element of pqmin = "<<pq.top()<<endl;
    cout<<"Elements of pqmin = ";
    while(!pqmin.empty())
    {
        cout<<pqmin.top()<<" ";
        pqmin.pop();
    }
    
    
    

    return 0;
}