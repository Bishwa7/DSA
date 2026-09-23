#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    vector<int> arr = {10,20,30,40,50};
    
    //1. accumulate
    int total = accumulate(arr.begin(), arr.end(), 0);
    cout<<"Total sum of elements in vector'arr' = "<<total<<endl;
    
    
    //2. inner_product
    vector<int> arr2 = {1,2,3,4,5,6,7};  //{1,2,3,4}
    int ans = inner_product(arr.begin(), arr.end(), arr2.begin(), 0 );
    cout<<"inner_product of arr and arr2 = "<<ans<<endl;
    
    
    //3. partial_sum
    vector<int> result(arr.size());
    partial_sum(arr.begin(), arr.end(), result.begin());
    cout<<"partial_sum of arr = ";
    for(int i : result)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    
    //4. iota
    vector<int>arr3(5);
    iota(arr3.begin(), arr3.end(), 250);
    cout<<"vector'arr3' after iota = ";
    for(int i : arr3)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    
    

    return 0;
}