#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    vector<int> first = {1,2,3,4};
    vector<int> second = {3,4,5,6};
    
    //1. set_union
    
    vector<int>result1;
    
    set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(result1, result1.begin()));
    
    cout<<"set_union = ";
    for(int i : result1)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    
    
    //2. set_intersection
    
    vector<int>result2;
    
    set_intersection(first.begin(), first.end(), second.begin(), second.end(), inserter(result2, result2.begin()));
    
    cout<<"set_intersection = ";
    for(int i : result2)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    
    //3. set_difference
    
    vector<int>result3;
    
    set_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result3, result3.begin()));
    
    cout<<"set_difference = ";
    for(int i : result3)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    
    
    //2. set_symmetric_difference
    
    vector<int>result4;
    
    set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result4, result4.begin()));
    
    cout<<"set_symmetric_difference = ";
    for(int i : result4)
    {
        cout<<i<<" ";
    }cout<<endl;
    

    return 0;
}