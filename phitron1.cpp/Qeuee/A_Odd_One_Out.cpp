#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
        {
            if(b!=c)
            {
                cout<<c<<endl;
            }
        }
        else if(a==c)
        {
            if(a!=b)
            {
                cout<<b<<endl;
            }
        }
        else if(b==c)
        {
            if(b!=a)
            {
                cout<<a<<endl;
            }
        }
    }
    return 0;
}