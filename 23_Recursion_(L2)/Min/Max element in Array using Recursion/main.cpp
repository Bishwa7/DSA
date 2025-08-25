#include <bits/stdc++.h>
using namespace std;

void findMin(int arr[], int& size, int index, int& mini)
{
    if(index >= size) return;
    
    if(arr[index] < mini)
    {
        mini = arr[index];
    }
    
    findMin(arr, size, index+1, mini);
}


void findMax(int arr[], int& size, int index, int& maxi)
{
    if(index >= size) return;
    
    if(arr[index] > maxi)
    {
        maxi = arr[index];
    }
    
    findMax(arr, size, index+1, maxi);
}


int main()
{
    //cout<<"Hello World";
    
    int arr[] = {10,20,90,4,50};
    int size = 5;
    int index = 0;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    
    findMin(arr, size, index, mini);
    
    cout<<"Minimum element in the array = "<<mini<<endl;
    
    
    findMax(arr, size, index, maxi);
    
    cout<<"Maximum element in the array = "<<maxi<<endl;

    return 0;
}