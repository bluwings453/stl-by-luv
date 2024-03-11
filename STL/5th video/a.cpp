#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={2,3,4,5,7,8};
    // with &(ampercent) it addresses to the actual memory and
    // makes changes to it 
    for(int &value:v)
    {
        // cout<<value<<" ";
        value++;
    }
    cout<<endl;
    for(int value:v)
    {
        cout<<value<<" ";
    }
    
    return 0;
}

// with for(int &value:v) it will print 3 4 5 6 8 9 
// without -> 2 3 4 5 7 8 
