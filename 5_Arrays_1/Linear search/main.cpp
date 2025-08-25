#include <iostream>
using namespace std;

bool findTarget(int arr[], int size, int target)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }
    return false;
    
}


int main()
{
    
    int arr[100];
    int size;
    cout<<"Enter the no. of elements = ";
    cin>>size;
    
    for(int i=0; i<size; i++)
    {
        cout<<"Enter elements for index "<<i<<endl;
        cin>>arr[i];
    }
    
    
    int target;
    cout<<"Enter the element to find = ";
    cin>>target;
    
    int ans = findTarget(arr, size, target);
    cout<<"Ans = "<<ans<<endl;
    

    return 0;
}



