#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size, int index)
{
    if(index >= size) return;
    
    cout<<arr[index]<<" ";
    
    printArr(arr, size, index+1);
}


void revPrintArr(int *arr, int size)
{
    int index = size-1;
    
    if(index < 0) return;
    
    cout<<arr[index]<<" ";
    
    revPrintArr(arr, size-1);
}


int main()
{
    //cout<<"Hello World";
    
    int arr[100] = {10,20,30,40,50};
    
    int size = 5;
    int index = 0;
    
    printArr(arr, size, index);
    
    cout<<endl;
    
    revPrintArr(arr, size);
    
    
    
    return 0;
}