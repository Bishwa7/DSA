#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1 ;
    
    
    
    
    while(start <= end)
    {
        int mid = start + ((end - start) / 2); 
        //int mid = (start + end) / 2; 
        
        
        if(arr[mid] == target)
        {
            return mid;
        }
        
        if(target < arr[mid])
        {
            end = mid - 1;
        }
        
        if(target > arr[mid])
        {
            start = mid + 1;
        }
        
        mid = (start + end) / 2;
        
    }
    
    
    return -1;
}

int main()
{
    //cout<<"Hello World";
    
    int arr[100] = {2,8,10,20,30,34,46,78};
    int size = 8;
    int target = 46;
    

    int answer = binarySearch(arr,size,target);
    cout<<answer<<endl;

    return 0;
}