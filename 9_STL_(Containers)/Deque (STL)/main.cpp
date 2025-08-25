#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    deque<int> dq;
    
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(100);
    dq.push_front(200);
    dq.push_front(300);
    
    cout<<"Elements in deque(dq) = ";
    deque<int>::iterator it = dq.begin();
    while(it != dq.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    
    dq.pop_back();
    dq.pop_front();
    
    cout<<"Elements in deque(dq) after pop_back() & pop_front() = ";
    for(int i : dq)
    {
        cout<<i <<" ";
    }
    cout<<endl;
    
    cout<<"Front element in deque(dq) = "<<dq.front()<<endl;
    cout<<"Back element in deque(dq) = "<<dq.back()<<endl;
    
    cout<<"3rd element in dq = "<<dq[2]<<endl;
    cout<<"2nd element in dq = "<<dq.at(1)<<endl;
    
    if(dq.empty()==0)
    {
        cout<<"dq not empty() & using erase() to delete all elements = "<<endl;
        dq.erase(dq.begin(), dq.end());
    }
    else
    {
        cout<<"dq is empty"<<endl;
    }
    
    
    
    
    cout<<"After earse whole deque is empty & now inserting 5 elements with insert() = "<<endl;
    dq.insert(dq.begin(), 1111);
    dq.insert(dq.begin() + 1, 2222);
    dq.insert(dq.begin() + 2, 3333);
    
    
    
    cout<<"New elements in dq = ";
    deque<int>:: iterator t3 = dq.begin();
    while(t3 != dq.end())
    {
        cout<<*t3<<" ";
        t3++;
    }
    
    
    cout<<endl;
    
    
    
    
    cout<<"dq.size() = "<<dq.size()<<endl;
    dq.clear();
    
    cout<<"dq.size() after dq.clear() = "<<dq.size()<<endl<<endl<<endl;
    
    
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(100);
    dq.push_front(200);
    dq.push_front(300);
    cout<<"New elements in dq = ";
    for(int i : dq)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    
    
    deque<int> d2;
    d2.push_back(11);
    d2.push_back(22);
    d2.push_back(33);
    d2.push_front(77);
    cout<<"New elements in dq = ";
    for(int i : d2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    
    dq.swap(d2);
    
    
    
    cout<<"After dq.swap(d2); , new elements in dq = ";
    cout<<"New elements in dq = ";
    for(int i : dq)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    

    return 0;
}