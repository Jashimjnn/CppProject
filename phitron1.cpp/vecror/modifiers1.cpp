#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    vector<int>v={1,2,3,4};
    vector<int>v1={11,12,13,14};
    //v1=v;
    //v1.insert(v1.begin()+2,10);
    v1.insert(v1.begin()+2,v.begin(),v.end());
    v.erase(v.begin()+3);
    for( int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for( int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+0,v.begin()+1);
    for( int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}