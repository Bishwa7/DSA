#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout<<"Hello World";
    
    int arr[4][3] = {{10,20,30},{11,12,13},{40,50,60},{14,15,16}};
    
    int arr2[4][3] = {10,20,30,11,12,13,40,50,60,14,15,16};
    
    int arr3[4][3] = {10,20,30};
    
    
    int rowSize = 4;
    int colSize = 3;
    
    cout<<"printing 2D array arr[][] :"<<endl;
    for(int row=0; row<rowSize; row++)
    {
        for(int col=0; col<colSize; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    
    
    
    cout<<"printing 2D array arr2[][] :"<<endl;

    for(int row=0; row<rowSize; row++)
    {
        for(int col=0; col<colSize; col++)
        {
            cout<<arr2[row][col]<<" ";
        }
        cout<<endl;
    }
    
    
    
    
    cout<<"printing 2D array arr3[][] :"<<endl;

    for(int row=0; row<rowSize; row++)
    {
        for(int col=0; col<colSize; col++)
        {
            cout<<arr3[row][col]<<" ";
        }
        cout<<endl;
    }
    
 
    return 0;
}