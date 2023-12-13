#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll t;
    cin>>t;
    ll cnt=0;
    while(t--)
    {
        string str;
        cin>>str;
        if(str=="Tetrahedron")
        {
            cnt+=4;
        }
        else if(str=="Cube")
        {
            cnt+=6;
        }
        else if(str=="Octahedron")
        {
            cnt+=8;
        }
        else if(str=="Dodecahedron")
        {
            cnt+=12;
        }
        else
        {
            cnt+=20;
        }
    }
    cout<<cnt<<endl;
    return 0;
}