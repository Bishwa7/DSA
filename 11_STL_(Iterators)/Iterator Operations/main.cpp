#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    vector<int> arr = {10,20,30,40,50,60,70};
    
    vector<int>:: iterator it;
    
    for(it=arr.begin(); it!=arr.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
    it=arr.begin()+2;
    
    cout<<"it element = "<<*it<<endl;
    cout<<"5th element = "<<*(it + 2)<<endl;
    cout<<"Previoius element = "<< *(--it) <<endl;
    cout<<"Next element = "<< *(++it) <<endl;
    
    vector<int>:: iterator it2;
    
    it2=arr.begin();
    
    cout<<"it now = "<<*it<<endl;
    cout<<"it2 now = "<<*it2<<endl;
    
    if(it==it2)
    {
        cout<<"Matched"<<endl;
    }
    
    
    if(it!=it2)
    {
        cout<<"Not Matched"<<endl;
    }
    
    
    
    it2 = it;
    
    cout<<"it2 now = "<<*it2<<endl;
    

    return 0;
}