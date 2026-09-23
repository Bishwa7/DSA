#include <bits/stdc++.h>
using namespace std;


pair<int,int> checkTwoSum (int arr[],int size,int target)
{
    pair<int,int> ans = make_pair(-1,-1);
    //int n=nums.size();

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i]+arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
    
}





int main()
{
    //cout<<"Hello World";
    
    int arr[100]={10,20,30,40,50};
    int size=5;
    int target = 70;
    
    pair<int,int> ans = checkTwoSum(arr,size,target);
    
    if(ans.first == -1 && ans.second == -1)
    {
        cout<<"Pair not found"<<endl;
    }
    else
    {
        cout<<"Pair found : "<<ans.first<<" "<<ans.second<<endl;
    }

    return 0;
}