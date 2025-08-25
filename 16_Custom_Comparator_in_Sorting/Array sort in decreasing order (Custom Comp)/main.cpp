#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& arr)
{
    int size = arr.size();
    
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

bool myComp(int &a , int &b)
{
    // return a<b; // increasing order sorting
    return a>b; // decreasing order sorting
}

int main()
{
    //cout<<"Hello World";
    
    vector<int> arr = {33,44,55,22,11};
    
    sort(arr.begin(), arr.end(), myComp);
    
    print(arr);
    
    return 0;
}