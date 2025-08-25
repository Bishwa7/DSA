#include <bits/stdc++.h>
using namespace std;


void printdouble(int a)
{
    cout<<2*a<<" ";
}

int checkEven(int a)
{
    return a%2==0;
}

int main()
{
    //cout<<"Hello World";
    
    vector<int> arr ={13,11,10,40,55,6,22,20,10,10};
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    for_each(arr.begin(), arr.end(), printdouble);
    cout<<endl;
    
    
    int target = 55;
    auto it = find(arr.begin(), arr.end(), target);
    cout<<*it<<endl;
    
    
    auto it2 = find_if(arr.begin(), arr.end(), checkEven);
    cout<<*it2 <<endl;
    
    
    
    int num = 10;
    int ans = count(arr.begin(), arr.end(), num);
    cout<<"num occurs(count) = "<<ans<<endl;
    
    
    int ans1 = count_if(arr.begin(), arr.end(), checkEven);
    cout<<"Total even numbers in vector = "<<ans1<<endl;
    
    
    
    sort(arr.begin(), arr.end());
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    reverse(arr.begin(), arr.end());
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    
    rotate(arr.begin(), arr.end() - 3, arr.end());
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    
    
    sort(arr.begin(), arr.end());
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    auto it3 = unique(arr.begin(), arr.end());
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    arr.erase(it3, arr.end());
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    auto it4  = partition(arr.begin(), arr.end(), checkEven);
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    

    return 0;
}