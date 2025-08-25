#include <bits/stdc++.h>
using namespace std;

bool search2Dvector(vector<vector<int>>arr, int target)
{
    int rowSize = arr.size();
    int colSize = arr[0].size();
    
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            if(arr[i][j]==target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    //cout<<"Hello World";
    
    vector<vector<int>> arr(4,vector<int>(3,0));
    
    int rowSize = arr.size();
    int colSize = arr[0].size();
    
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int target = 50;
    
    bool Ans = search2Dvector(arr,target);
    cout<<"Answer is ="<<Ans<<endl;

    return 0;
}