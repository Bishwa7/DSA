#include <bits/stdc++.h>
using namespace std;


void reverseArr(int arr[],int size)
{
    for(int i=size-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}



int main()
{
    //cout<<"Hello World";
    
    int arr[100]= {10,20,30,40,50,60,70};
    int size=7;
    
    reverseArr(arr,size);

    return 0;
}