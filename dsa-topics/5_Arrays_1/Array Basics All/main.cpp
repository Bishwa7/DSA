#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void solve(int arr[], int size)  //function to multiply all elements of array with 10
{
    for(int i=0; i<size; i++)
    {
        arr[i] = arr[i] * 10;
    }
}

int main()
{
    int arr[10];
    //Bottom line gives error
    //int brr[];
    int crr[] = {10,20,30,40,50};
    int drr[5] = {7};
    
    cout<<drr[0]<<endl;
    cout<<crr[4]<<endl;
    
    
    //Fill function (filling all array elements with same number)
    int arr1[5];
    fill(arr1, arr1+5, 10);
    cout<<arr1[0]<<" "<<arr1[1]<<" "<<arr1[2]<<" "<<arr1[3]<<" "<<arr1[4]<<" "<<arr1[5]<<" "<<endl;
    
    //Taking Input in an array and printing it
    int arr2[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr2[i];
    }
    
    for(int i=0; i<5; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0; i<5; i++)
    {
        cout<<i[arr2]<<" ";           // This also works
    }
    cout<<endl;
    
    
    
    
    // Arrays with function 
    
    int arr3[5] = {10,20,30,40,50};
    int size=5;
    solve(arr3,size);
    print(arr3,size);
    
    

    return 0;
}