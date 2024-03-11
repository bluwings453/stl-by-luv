#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>>vp={{1,2},{2,3}};
    for(pair<int,int> &value:vp)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }


    
    return 0;
}