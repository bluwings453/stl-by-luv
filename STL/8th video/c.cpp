#include<bits/stdc++.h>
using namespace std;

void helper(unordered_set<string>&s){
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
    unordered_set<string>s; //set stores in sorted order
    s.insert("abc"); //O(1) for inserting and acessing
    s.insert("gfg");
    s.insert("fog");
    s.insert("abc"); //this will not print because set stores unique values as map
    // s.find("abc");  ->this returns iterator 
    auto it = s.find("abc");  //O(1)

    if(it!=s.end())
    {
        cout<<(*it); //for printing it
        s.erase(it); //for erasing it
    }
    s.erase("abc"); //erase can also take value and delete
    helper(s);
}
