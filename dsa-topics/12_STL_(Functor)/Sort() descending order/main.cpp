#include <bits/stdc++.h>
using namespace std;

class comparator{
    public:
    bool operator()(int a, int b){
        return a>b;
    }
};


int main()
{
    //cout<<"Hello World";
    
    vector<int> arr = {20,10,15,25,21,12};
    
    sort(arr.begin(), arr.end(), comparator());
    
    for(int i : arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    

    return 0;
}