#include<bits/stdc++.h>
using namespace std;

void helper(multiset<string>&s){
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
    multiset<string>s; //set stores in sorted order
    s.insert("abc"); //O(logN) for inserting and acessing
    s.insert("gfg");
    s.insert("fog");
    s.insert("abc"); //it prints because multiset stores duplicate values too
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
