#include <bits/stdc++.h>
using namespace std;

void selectionSort (vector<int>& arr)
{
    int size = arr.size();
    
    for(int i=0; i<size-1; i++)
    {
        int minIndex = i;
        
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        
        swap(arr[i] , arr[minIndex]);
    }
    
}


int main()
{
    //cout<<"Hello World";
    
    vector<int> arr = {44,33,55,22,11};
    
    selectionSort(arr);
    
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}