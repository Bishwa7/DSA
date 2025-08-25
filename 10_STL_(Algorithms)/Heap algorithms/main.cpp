#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    
    vector<int> arr = {22,11,55,66,77};
    cout<<"Intial vector = ";
    for(int i : arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    //1.make_heap
    
    make_heap(arr.begin(), arr.end());
    cout<<"Vector after heap = ";
    for(int i : arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    
    //2. push_heap
    
    arr.push_back(99);
    cout<<"Vector after adding new element = ";
    for(int i : arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    
    push_heap(arr.begin(), arr.end());
    
    cout<<"Vector after push_heap = ";
    for(int i : arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    
    
    //3.pop_heap
    
    pop_heap(arr.begin(), arr.end());
    cout<<"Vector after pop_heap = ";
    for(int i : arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    
    arr.pop_back();
    
    cout<<"Vector after pop_back() = ";
    for(int i : arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    
    
    //4. sort_heap
    
    sort_heap(arr.begin(), arr.end());
    cout<<"Vector after sort_heap = ";
    for(int i : arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    
    
    
    

    return 0;
}