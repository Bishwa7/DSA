#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    stack<int> st;
    
    st.push(10);
    st.push(20);
    st.push(30);
    
    cout<<"st.top() = "<< st.top()<<endl;
    
    
    if(st.empty() == 0)
    {
        cout<<"Stack is not empty"<<endl;
    }
    else
    {
        cout<<"Stack is empty"<<endl;
    }
    
    cout<<endl;
    
    stack<int> st2;
    st2.push(111);
    st2.push(222);
    st2.push(333);
    
    st.swap(st2);
    
    cout<<"After st.swap(st2); = "<<endl;
    cout<<"Elements in stack st = ";
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    cout<<endl;
    
    cout<<"Elements in stack st2 = ";
    while(!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }
    cout<<endl;
    
    

    return 0;
}