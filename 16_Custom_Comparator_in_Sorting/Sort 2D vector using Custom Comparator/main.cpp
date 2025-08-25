#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>& arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        vector<int> &temp = arr[i];
        int a = temp[0];
        int b = temp[1];
        
        cout<<a<<" "<<b<<endl;
    }
    cout<<endl;
}

bool myComp1stIndexSort(vector<int>&a, vector<int>&b)
{
    return a[1] < b[1];
}

int main()
{
    //cout<<"Hello World";
    
    vector<vector<int>>arr;
    
    int n;
    cout<<"Enter size = ";
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        int a,b;
        cout<<"enter a, b = "<<endl;
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        arr.push_back(temp);
        
    }
    
    
    
    cout<<endl<<"Here are the value = "<<endl;
    print(arr);
    
    
    
    
    sort(arr.begin(), arr.end());
    
    cout<<endl<<"Here are the value after 0th index sort = "<<endl;
    print(arr);
    
    
    
    
    
    sort (arr.begin(), arr.end(), myComp1stIndexSort);
    
    cout<<endl<<"Here are the value after 0th index sort = "<<endl;
    print(arr);

    
    
    
    
    return 0;
}