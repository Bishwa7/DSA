#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    int a = 10;
    int b = 20;
    
    //1. min
    
    cout<<"Min between a & b = "<<min(a,b)<<endl;
    
    
    //2. max 
    cout<<"Max between a & b = "<<max(a,b)<<endl;
    
    
    
    
    
    
    
    
    //3. min_element
    
    vector<int> arr = {10,30,7,30,33,50,70,99,100,44,55};
    
    auto it = min_element(arr.begin(), arr.end());
    cout<<"Min element in arr = "<<*it<<endl;
    
    
    //4. max_element 
    
    auto it2 = max_element(arr.begin(), arr.end());
    cout<<"Max element in arr = "<<*it2 <<endl;
    
    
    
    
    

    return 0;
}