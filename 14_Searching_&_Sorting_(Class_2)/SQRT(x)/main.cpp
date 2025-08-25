#include <iostream>
using namespace std;

double mySqrt(int x)
{
    int start = 0;
    int end = x;
    long long int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end)
    {
        long long int prod = mid*mid;
        if(prod == x)
        {
            return mid;
        }
        if(prod < x)
        {
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    //return ans;
    double sqrtAns = double(ans);
    
    int precision;
    cout<<"how many decimal precision needed = "<<endl;
    cin>>precision;
    double factor = 1;
    double finalAns = sqrtAns;
    
    cout<<"First = "<<sqrtAns<<endl;
    
    for(int i=0; i<precision; i++)
    {
        factor = factor/10;
        cout<<"factor = "<<factor<<endl;
        
        for(int n = 0; n<=9; n++)
        {
            double toAdd = n*factor;
            cout<<"to Add = "<<toAdd<<endl;
            
            double newAns = sqrtAns+toAdd;
            if((newAns*newAns < x))
            {
                finalAns = newAns; 
                cout<<"sqrt ans updated to = "<<finalAns<<endl;
            }
            else{
                cout<<"breaking"<<endl;
                break;
            }
            
        }
        sqrtAns = finalAns;
    }
    
    return finalAns;
}

int main()
{
    //cout<<"Hello World";
    
    int num = 54;
    
    double ans = mySqrt(num);
    cout<<ans<<endl;

    return 0;
}