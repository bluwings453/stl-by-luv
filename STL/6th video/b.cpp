#include<bits/stdc++.h>
using namespace std;

void helper(map<int,string>&m)
{
    cout<<m.size()<<endl;
    for(auto &it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main()
{
    map<int,string>m;
    m[1]="dog";
    m[5]="gfg";
    m[3]="cat";
    m.insert({4,"bat"});
    helper(m);

    return 0;
}
