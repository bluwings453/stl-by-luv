// iterator
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={2,3,5,6,7};
    vector<int>::iterator it=v.begin();
    cout<<(*it)<<endl;
    // cout<<(*(it+1))<<endl;
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<(*it)<<" ";
    }

    return 0;
}
