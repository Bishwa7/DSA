#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    vector<int> marks;
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    
    cout<<"Marks vector = "<<endl;
    for(int i : marks)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"Poping one element from marks = ";
    marks.pop_back();
    for(int i : marks)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"Inserting element = ";
    vector<int>::iterator it = marks.begin()+ 1;
    marks.insert(/*marks.begin() + 1*/ it ,50);
    
    for(int i : marks)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;
    cout<<"Erasing element = ";
    marks.erase(marks.begin() + 1 , marks.end());
    
    for(int i : marks)
    {
        cout<<i<<" ";
    }
    
    
    
    
    
    
    
    /////////////////////////////////////////////////////////////////////////////////////
    
    
    
    
    cout<<endl<<endl;
    
    
    
    cout<<"Demo vector = "<<endl;
    vector<int> demo = {1,2,3,4,5};
    
    cout<<"First element of demo = "<< *(demo.begin())<<endl;
    cout<<"Last element of demo = "<< *(demo.end() - 1)<<endl;
    cout<<"Size of demo = "<< demo.size()<<endl;
    cout<<"Capacity of demo = "<< demo.capacity()<<endl;
    cout<<"First element of demo = "<< demo.front() <<endl;
    cout<<"Last element of demo = "<< demo.back() <<endl;
    cout<<"Element at index 1 = "<<demo.at(1)<<endl;
    cout<<"Element at index 1 = "<<demo[1]<<endl;
    cout<<"Max size of vector demo = "<<demo.max_size()<<endl;
    
    cout<<"Printing demo elements using iterator = ";
    vector<int>::iterator it1 = demo.begin();
    while(it1 != demo.end())
    {
        cout<< *it1 << " ";
        it1++;
    }
    
    
    
    /////////////////////////////////////////////////////////////////////////////////////

    
    
    cout<<endl<<endl;
    cout<<"distance vector = "<<endl;
    vector<int> distance(5,1);
    cout<<"Is vector empty() ? = "<<distance.empty()<<endl; //returns 1(true) if empty else returns 0(false)
    distance.clear();
    cout<<"Is vector empty() after clear()? = "<<distance.empty()<<endl; 
    
    
    
    
    /////////////////////////////////////////////////////////////////////////////////////

    cout<<endl;
    
    cout<<"Hello vector = "<<endl;
    vector<int>hello;
    cout<<"Capacity of hello = "<<hello.capacity()<<endl;
    hello.reserve(10);
    cout<<"Capacity of hello after hello.reserve(10) = "<<hello.capacity()<<endl;
    
    
    
    /////////////////////////////////////////////////////////////////////////////////////

    
    cout<<endl<<"Implementing Swap() = "<<endl;
    vector<int>bro1 = {1,2,3,4,5};
    vector<int>bro2 = {10,20,30,40,50,60,70};
    
    cout<<"Before Swap() = "<<endl;
    cout<<"Bro 1 = ";
    for(int i : bro1)
    {
        cout<<i<<" ";
    } cout<<" "<<"(Size of bro1 = "<<bro1.size()<<")";
    
    cout<<endl<<"Bro2 = ";
    for(int i : bro2)
    {
        cout<<i<<" ";
    } cout<<" "<<"(Size of bro2 = "<<bro2.size()<<")";
    
    
    bro1.swap(bro2);
    
    cout<<endl<<"After bro1.swap(bro2) = "<<endl;
    cout<<"Bro 1 = ";
    for(int i : bro1)
    {
        cout<<i<<" ";
    } cout<<" "<<"(Size of bro1 = "<<bro1.size()<<")";
    
    cout<<endl<<"Bro2 = ";
    for(int i : bro2)
    {
        cout<<i<<" ";
    } cout<<" "<<"(Size of bro2 = "<<bro2.size()<<")";
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}