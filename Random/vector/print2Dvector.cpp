#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>arr){
    
    cout<<endl<<"Printing 2D vector"<<endl;
    
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}

int main(){
    vector<vector<int>>arr(4, vector<int>(3));
    
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    
    
    print(arr);
    
    return 0;
}