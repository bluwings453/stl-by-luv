#include<bits/stdc++.h>
using namespace std;

void helper(set<string>&s){
    // printing method-1
    for(string value:s){
        cout<<value<<endl;
    }
    // printing method-2
    for(auto it = s.begin(); it!=s.end(); it++)
    {
        cout<<(*it)<<endl;
    }
}

int main()
{
    set<string>s; //set stores in sorted order
    s.insert("abc"); //O(logN) for inserting and acessing
    s.insert("gfg");
    s.insert("fog");
    s.insert("abc"); //this will not print because set stores unique values as map
    // s.find("abc");  ->this returns iterator 
    auto it = s.find("abc");  //log(N)

    if(it!=s.end())
    {
        cout<<(*it); //for printing it
        s.erase(it); //for erasing it
    }
    s.erase("abc"); //erase can also take value and delete
    helper(s);
}
