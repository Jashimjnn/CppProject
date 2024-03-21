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
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<0 || n<=1399)
        {
            cout<<"Division 4"<<endl;
        }
        else if(n>=1400 && n<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else if(n>=1600 && n<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else
        {
            cout<<"Division 1"<<endl;
        }
    }
    return 0;
}