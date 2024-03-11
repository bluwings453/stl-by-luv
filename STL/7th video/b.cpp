#include<bits/stdc++.h>
using namespace std;

void helper(unordered_map<int,string>&m)
{
    cout<<"Size of m : "<<m.size()<<endl;
    for(auto &it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main()
{
    unordered_map<int,string>m;  //prints which is not in order
    

    helper(m);

    return 0;
}
