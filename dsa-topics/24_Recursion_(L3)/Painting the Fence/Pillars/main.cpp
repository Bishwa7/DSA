#include <bits/stdc++.h>
using namespace std;

int solve(int p, int c)
{
    if(p == 1)
    {
        return c;
    }
    
    if(p == 2)
    {
        return c + c * (c-1);
    }
    
    int ans = (c-1) * (solve(p-1, c) + solve(p-2 , c));
    return ans;
}


int main()
{
    //cout<<"Hello World";
    
    int n = 4;
    int k = 3;
    
    int ans = solve(n, k);
    
    
    cout<<ans<<endl;
    


    return 0;
}