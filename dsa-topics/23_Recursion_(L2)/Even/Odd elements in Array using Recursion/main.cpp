#include <bits/stdc++.h>
using namespace std;

void printOdd(int arr[], int& size, int index)
{
    if(index >= size) return;
    
    if(arr[index] & 1)
    {
        cout<<arr[index]<<" ";
    }

    
    printOdd(arr, size, index+1);
}


void printEven(int arr[], int& size, int index)
{
    if(index >= size) return;
    
    if(!(arr[index] & 1))
    {
        cout<<arr[index]<<" ";
    }
    
    
    printEven(arr, size, index+1);
}

int main()
{
    //cout<<"Hello World";
    
    int arr[] = {11,12,13,14,15,16,17,18};
    int size = 8;
    int index = 0;
    
    printOdd(arr, size, index);
    
    cout<<endl;
    
    printEven(arr, size, index);

    return 0;
}