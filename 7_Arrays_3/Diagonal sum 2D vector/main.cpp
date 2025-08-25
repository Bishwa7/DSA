#include <bits/stdc++.h>
using namespace std;

void printDiagonalSum(vector<vector<int>>arr)
{
    int rowSize = arr.size();
    int colSize = arr[0].size();
    
    int sum = 0;
    for(int row=0; row<rowSize; row++)
    {
        for(int col=0; col<colSize; col++)
        {
            if(row == col)
            {
                sum = sum + arr[row][col];
            }
        }
    }
    cout<<" Sum of diagonal = "<<sum<<endl;
}



void printSecondaryDiagonalSum (vector<vector<int>>arr)
{
    int rowSize = arr.size();
    int colSize = arr[0].size();
    int sum=0;
    
    for(int row=0; row<rowSize; row++)
    {
        for(int col=0; col<colSize; col++)
        {
            if((row+col) == colSize-1)
            {
                sum = sum + arr[row][col];
            }
        }
    }
    cout<<"Sum of secondary diagonal = "<<sum<<endl; 
}


int main()
{
    //cout<<"Hello World";
    
    vector<vector<int>>arr(4,vector<int>(4,0));
    int rowSize = arr.size();
    int colSize = arr[0].size();
    
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    printDiagonalSum(arr);
    
    printSecondaryDiagonalSum(arr);

    return 0;
}