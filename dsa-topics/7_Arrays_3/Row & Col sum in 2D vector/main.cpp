#include <bits/stdc++.h>
using namespace std;

void printRowSum(vector<vector<int>>arr)
{
    int rowSize = arr.size();
    int colSize = arr[0].size();
    
    for(int row=0; row<rowSize; row++)
    {
        int sum = 0;
        for(int col=0; col<colSize; col++)
        {
            sum = sum + arr[row][col];
        }
        cout<<sum<<endl;
    }
}

void printColSum(vector<vector<int>>arr)
{
    int rowSize = arr.size();
    int colSize = arr[0].size();
    
    for(int col=0; col<colSize; col++)
    {
        int sum = 0;
        for(int row=0; row<rowSize; row++)
        {
            sum = sum + arr[row][col];
        }
        cout<<sum<<endl;
    }
}

int main()
{
    //cout<<"Hello World";
    vector<vector<int>> arr (3,vector<int>(3,0));
    int rowSize = arr.size();
    int colSize = arr[0].size();
    
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    cout<<"Printing sum of elemnets in one row = "<<endl;
    printRowSum(arr);
    
    cout<<"Printing sum of all elemnets in one column = "<<endl;
    printColSum(arr);

    return 0;
}