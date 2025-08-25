#include <bits/stdc++.h>
using namespace std;

//function to print a vector
void printVector(vector<int>v)
{
    int size = v.size();
    for(int i =0 ; i<size; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    //cout<<"Hello World";
    
    vector<int> Bishwa = {1,2,3,4,5};  //vector initialization (Here, vector name is Bishwa)
    printVector(Bishwa); //printing vector using function
    
    Bishwa.push_back(7); //Adding element to vector Bishwa
    Bishwa.push_back(8); //Adding element to vector Bishwa
    printVector(Bishwa);
    
    
    Bishwa.pop_back();   //deleting one element at the end from vector Bishwa
    printVector(Bishwa);

    return 0;
}