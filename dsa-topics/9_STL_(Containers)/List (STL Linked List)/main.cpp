#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    list<int> mylist;
    
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_front(100);
    mylist.push_front(200);
    
    for(int i : mylist)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;
    
    mylist.pop_back();
    mylist.pop_front();
    
    list<int>:: iterator it = mylist.begin();
    while(it != mylist.end())
    {
        cout<< *it <<" ";
        it++;
    }
    
    cout<<endl;
    
    cout<<"Front element of myList = "<<mylist.front()<<endl;
    cout<<"Last element of myList = "<<mylist.back()<<endl;
    
    cout<<"Size of mylist = "<<mylist.size()<<endl;
    
    
    mylist.clear();
    cout<<"After clearing = "<<endl;
    if(mylist.empty())
    {
        cout<<"myList is empty"<<endl;
    }
    if(mylist.empty() == 0)
    {
        cout<<"myList is not empty"<<endl;
    }
    
    
    cout<<endl;
    
    
    mylist.insert(mylist.begin(), 500);
    mylist.insert(mylist.end(), 600);
    cout<<"List after inserting elements with insert() = ";
    for(int i : mylist)
    {
        cout<<i<<" ";
    }
    
    cout<<endl<<"After erasing first element with erase() = ";
    
    mylist.erase(mylist.begin());
    for(int i : mylist)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    mylist.remove(600);
    cout<<"after mylist.remove(600) = ";
    for(int i : mylist)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    
    cout<<"Adding new elements to mylist = ";
    
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    for(int i : mylist)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    cout<<"Making new list with new elements = ";
    list<int> newlist;
    newlist.push_back(111);
    newlist.push_back(222);
    newlist.push_back(333);
    for(int i : newlist)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    mylist.swap(newlist);
    
    cout<<"After mylist.swap(newlist); = "<<endl;
    cout<<"mylist = ";
    for(int i : mylist)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"newlist = ";
    for(int i : newlist)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    

    return 0;
}