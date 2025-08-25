#include <bits/stdc++.h>
using namespace std;

int minElement(int arr[], int size)
{
    int minAns = INT_MAX ;
    for(int i=0; i<size; i++)
    {
        
        if(arr[i]<= minAns)
        {
            minAns=arr[i];
        }
    }
    return minAns;
}



int maxElement(int arr[], int size)
{
    int maxANS = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>=maxANS)
        {
            maxANS = arr[i];
        }
    }
    return maxANS;
}


int main()
{
    //cout<<"Hello World";
    
    int arr[100];
    int size;
    cout<<"Enter the no. of elements = ";
    cin>>size;
    
    for(int i=0; i<size; i++)
    {
        cout<<"Enter element for "<<arr[i]<<endl;
        cin>>arr[i];
    }
    
    
    int ANS1 = minElement(arr,size);
    int ANS2 = maxElement(arr,size);
    
    cout<<"Minimum element in the array is = "<<ANS1<<endl;
    cout<<"maximum element in the array is = "<<ANS2<<endl;

    return 0;
}