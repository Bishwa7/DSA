#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    //1. binary_search
    vector<int>arr = {10,20,30,40,50};
    int target = 40;
    
    bool ans = binary_search(arr.begin(), arr.end(), target);
    if(ans)
    {
        cout<<"target found in arr (binary_search)";
    }
    else
    {
        cout<<"target not found in arr (binary_search)";
    }
    cout<<endl;
    
    
    
    //2. lower_bound
    
    vector<int>:: iterator it = lower_bound(arr.begin(), arr.end(), 25);
    cout<<"target found (lower_bound) = "<<*it<<endl;
    
    
    
    
    //3. upper_bound
    
    auto it2 = upper_bound(arr.begin(), arr.end(), 30);
    cout<<"upper_bound = "<<*it2<<endl;
    
    
    
    
    //4. equal_range
    
    vector<int>arr2 = {10,20,20,30,30,30,30,40,50,50,60,60};
    
    pair<vector<int>::iterator, vector<int>::iterator>ip;
    
    ip = equal_range(arr2.begin(), arr2.end(), 30);
    
    
    
    
    cout<<"30 is present from range = "<<ip.first-arr2.begin()<<" to = "<<ip.second-arr2.begin()<<endl;
    
    int i = ip.first - arr2.begin();
    int a = ip.second - arr2.begin();
    while(i<a)
    {
        cout<<arr2[i]<<" ";
        i++;
    }
    

    return 0;
}