#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(vector<int>& arr)
{
    int size = arr.size();
    
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}



int main()
{
    //cout<<"Hello World";
    
    vector<int>arr = {44,33,55,22,11};
    bubbleSort(arr);
    
    print(arr);

    return 0;
}