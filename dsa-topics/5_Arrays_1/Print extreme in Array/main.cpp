#include <bits/stdc++.h>
using namespace std;

void printExtreme(int arr[], int size)
{
    int i=0;
    int j=size-1;
    
    while(i<=j)
    {
        if(i<j)
        {
            cout<<arr[i]<<" ";
            i++;
        }
        
        cout<<arr[j]<<" ";
        j--;
    }
}



int main()
{
    //cout<<"Hello World";
    int arr[100]={10,20,30,40,50,60,70};
    int size=7;
    
    printExtreme(arr,size);
    

    return 0;
}