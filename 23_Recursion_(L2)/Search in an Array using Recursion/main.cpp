#include <bits/stdc++.h>
using namespace std;

int searchArr(int arr[], int &size, int index, int &target)
{
    if(index >= size) return -1;
    
    if(target == arr[index])
    {
        return index;
    }
    
    int recAns = searchArr(arr, size, index+1, target);
    return recAns;
}

int main()
{
    //cout<<"Hello World";
    
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    int target = 50;
    
    int ans = searchArr(arr, size, index, target);
    
    cout<<ans<<endl;

    return 0;
}