#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={2,3,5,6,7};
    vector<pair<int,int>>v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator vk;
    for(vk=v_p.begin(); vk!=v_p.end(); ++vk)
    {
        cout<<(*vk).first<<" "<<(*vk).second<<endl;
    }
    
}

// NOTE: (*it).first is same as (it->first)
