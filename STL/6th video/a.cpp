#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string>m;
    // inserting method-1
    m[1]="dog";
    m[5]="gfg";
    m[3]="cat";
    // inserting method-2
    m.insert({4,"bat"});


    map<int,string>::iterator it;  // we can replace with auto
    for(it=m.begin(); it!=m.end(); it++) // for(auto &it:m)
    {
        // cout<<(*it).first<<" "<<(*it).second<<endl;
        cout<<it->first<<" "<<it->second;
        // printed in sorted order 
        cout<<endl;
    }
    
    cout<<endl;

    // another method of traversing 
    for(auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    return 0;
}
