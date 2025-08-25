#include <bits/stdc++.h>
using namespace std;

void sortZeroOne(int arr[], int size)
{
    int zCount=0, oCount=0;
    
    //counting
    for(int i=0; i<size; i++)
    {
        if(arr[i]==0)
        {
            zCount++;
        }
        if(arr[i]==1)
        {
            oCount++;
        }
    }
    
    
    //inseting
    int i=0;
    for(; i<zCount; i++)
    {
        arr[i]=0;
    }
    for(i=zCount; i<size; i++)
    {
        arr[i]=1;
    }
    
    
}


int main()
{
    //cout<<"Hello World";
    
    int arr[100] = {0,1,0,0,0,1,1,0,0,1,0,1,0,0,1};
    int size = 15;
    
    //calling function
    sortZeroOne(arr,size);
    
    //printing array
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    

    return 0;
}