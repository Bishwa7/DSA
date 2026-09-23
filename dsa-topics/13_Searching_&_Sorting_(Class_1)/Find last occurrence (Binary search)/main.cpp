#include <bits/stdc++.h>
using namespace std;

int lastOccurrence(int arr[], int size, int target)
{
    int start = 0;
    int end = size-1;
    
    int ansIndex = -1;
    
    while(end>=start)
    {
        int mid = start + ((end - start) /2);
        
        if(arr[mid] == target)
        {
            ansIndex = mid;
            
            start = mid+1;
        }
        if(target > arr[mid])
        {
            start = mid+1;
        }
        if(target < arr[mid])
        {
            end = mid-1;
        }
        
    }
    return ansIndex;
}

int main()
{
    //cout<<"Hello World";
    
    int arr[100] = {10,20,20,20,30,40,50,60,70};
    
    int size = 9;
    int target = 20;
    
    
    int answer = lastOccurrence(arr,size,target);
    cout<<answer;
    
    
    
    return 0;
}