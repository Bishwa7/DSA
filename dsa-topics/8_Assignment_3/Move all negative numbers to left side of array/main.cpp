#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    
    vector<int>arr = {-1,2,-3,4,-5,6,0,-5,34,-7};
    //vector<int>arr = {1,-1,-2,-3,-4};
    
    int l=0, h=arr.size()-1;
    
    while(l<=h)
    {
        if(arr[l]>=0)
        {
            swap(arr[l], arr[h]);
            h--;
        }
        else if(arr[l]<0)
        {
            l++;
        }
    }
    
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}