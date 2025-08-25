#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"Hello World";
    unordered_map<string,string> table;
    
    table["in"] = "India";
    //table.at("en") = "England";  //for using at() key needs to exist already
    
    table.insert(make_pair("br","Brazil"));
    
    pair<string,string>p;
    p.first = "ru";
    p.second = "Russia";
    table.insert(p);
    
    
    
    
    cout<<"table.size() = "<<table.size()<<endl;
    
    if(table.empty() == 0)
    {
        cout<<"Tbale is not empty"<<endl;
    }
    else
    {
        cout<<"Table is empty"<<endl;
    }
    
    
    
    cout<<"table.at('in') = " <<table.at("in")<<endl;
    table.at("in") = "India2";
    cout<<"table.at('in') = " <<table.at("in")<<endl;
    
    
    unordered_map<string,string>:: iterator it = table.begin();
    
    while(it != table.end())
    {
        pair<string,string>p=*it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    }
    
    
    
    
    if(table.find("in") != table.end())
    {
        cout<<"Key found "<<endl;
    }
    else
    {
        cout<<"Key not found"<<endl;
    }
    
    
    
    
    if(table.count("im") == 0)
    {
        cout<<"Key not found"<<endl;
    }
    else
    {
        cout<<"key found"<<endl;
    }
    
    
    
    cout<<"table.size() = "<<table.size()<<endl;
    //table.clear();
    table.erase(table.begin(), table.end());
    cout<<"table.size() = "<<table.size()<<endl;
    
    
    
    
    cout<<endl<<endl;
    
    
    cout<<"Ordered map table1 = "<<endl;
    map<string,string> table1;
    table1.insert(make_pair("en","England"));
    table1.insert(make_pair("in","India"));
    table1.insert(make_pair("br","Brazil"));
    table1.insert(make_pair("Bk", "Bangkok"));
    
    map<string,string>:: iterator t1 = table1.begin();
    while(t1 != table1.end())
    {
        pair<string,string>p = *t1;
        cout<<p.first<<" "<<p.second<<endl;
        t1++;
    }

    return 0;
}