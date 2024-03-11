#include<bits/stdc++.h>
using namespace std;

void helper(map<int,string>&m)
{
    cout<<"Size of m : "<<m.size()<<endl;
    for(auto &it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main()
{
    map<int,string>m;
    m[1]="dog"; //O(logN)
    m[5]="gfg";
    m[3]="cat";
    m[6]="a";
    m[5]="cde";

    auto it =m.find(3); //it will return iterator on it, T.C is O(logN)
    m.erase(it); //T.C is O(logN)
    m.clear();  //T.C is O(logN)
    if(it==m.end()){
        // cout<<"No Value";
        m.erase(it); //O(logN)
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    helper(m);

    return 0;
}
 