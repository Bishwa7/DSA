#include <bits/stdc++.h>
using namespace std;

void findCount(int arr[], int size);


int main()
{
    //cout<<"Hello World";
    int arr[100] = {0,0,0,1,1,0,1,0,1,0,0,0,1,1,0,1,1,1,0,1};
    
    findCount(arr,20);

    return 0;
}




void findCount(int arr[], int size)
{
    int count0 = 0;
    int count1 = 0;
    
    for(int i=0; i<size; i++)
    {
        if(arr[i]==0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
        
    }
    cout<<"Number of 0 in the array = "<<count0<<endl;
    cout<<"number of 1 in the array = "<<count1<<endl;
}



