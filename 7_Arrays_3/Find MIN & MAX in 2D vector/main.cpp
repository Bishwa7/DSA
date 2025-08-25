#include <bits/stdc++.h>
using namespace std;

int findMin2Dvector(vector<vector<int>>arr)
{
    int minValue = INT_MAX;
    
    int rowSize = arr.size();
    int colSize = arr[0].size();
    
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            //minValue = min(arr[i][j],minValue);
            if(minValue>arr[i][j])
            {
                minValue = arr[i][j];
            }
        }
    }
    return minValue;
}

int findMax2Dvector(vector<vector<int>>arr)
{
    int maxValue = INT_MIN;
    
    int rowSize = arr.size();
    int colSize = arr[0].size();
    
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            maxValue = max(arr[i][j],maxValue);
        }
    }
    return maxValue;
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
    
    int min = findMin2Dvector(arr);
    int max = findMax2Dvector(arr);
    
    cout<<"Min Value = "<<min<<endl;
    cout<<"Max Value = "<<max<<endl;

    return 0;
}