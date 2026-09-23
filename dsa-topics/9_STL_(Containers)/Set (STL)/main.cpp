#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    set<int>st;
    st.insert(10);
    st.insert(22);
    st.insert(20);
    st.insert(10);
    st.insert(10);
    st.insert(40);
    st.insert(30);
    st.insert(30);
    st.insert(22);
    
    
    if(st.empty() == 0)
    {
        cout<<"Set is not empty"<<endl;
        cout<<"st.size() = "<<st.size()<<endl;
    }
    else
    {
        cout<<"Set is empty"<<endl;
    }
    
    
    set<int>:: iterator it = st.begin();
    while(it != st.end())
    {
        cout<<*it <<" ";
        it++;
    }
    cout<<endl;
    
    
    
    if(st.find(10) != st.end())
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    
    
    
    if(st.count(10) == 1 )
    {
        cout<<"Found"<<endl;
    }
    else if(st.count(10) == 0)
    {
        cout<<"Not found"<<endl;
    }
    
    
    cout<<"st.size() = "<<st.size()<<endl;
    //st.clear();
    st.erase(st.begin(), st.end());
    cout<<"st.size() = "<<st.size()<<endl;
    
    
    
    
    cout<<endl<<endl;
    cout<<"Unordered set (st2) = "<<endl;
    
    unordered_set<int>st2;
    st2.insert(40);
    st2.insert(22);
    st2.insert(20);
    st2.insert(10);
    st2.insert(10);
    st2.insert(40);
    st2.insert(33);
    st2.insert(30);
    st2.insert(22);
    
    unordered_set<int>:: iterator t2 = st2.begin();
    while(t2 != st2.end())
    {
        cout<<*t2<<" ";
        t2++;
    }
    cout<<endl;
    

    return 0;
}