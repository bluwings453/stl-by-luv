#include<bits/stdc++.h>
using namespace std;
// ordered sets
int main()
{
    set<string>s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);        
    }

    int a=1;
    for(auto value:s)
    {
        cout<<a<<")"<<value<<endl;
        a=a+1;
    }

    
    return 0;
}