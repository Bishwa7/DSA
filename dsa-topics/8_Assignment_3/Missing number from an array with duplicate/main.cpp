#include <bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int n)
{
    int i=0;
    while(i<n)
    {
        int index = arr[i]- 1;
        if(arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else i++;
    }
    
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    int num=0;
    for(int i=0; i<n; i++)
    {
        
        if(arr[i] != (i + 1))
        {
            num = i+1;
        }
    }
    return num;
}
int main()
{
    //cout<<"Hello World";
    int arr[] = {1,3,5,3,4};
    int n = sizeof(arr)/sizeof(int);
    
    int ans = findMissing(arr,n);
    cout<<ans<<endl;
    return 0;
}