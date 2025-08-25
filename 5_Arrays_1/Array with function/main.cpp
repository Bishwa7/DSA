#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void solve(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        arr[i] = arr[i] * 10;
    }
}


int main()
{
    int arr3[5] = {10,20,30,40,50};
    int size=5;
    solve(arr3,size);
    print(arr3,size);
    

    return 0;
}