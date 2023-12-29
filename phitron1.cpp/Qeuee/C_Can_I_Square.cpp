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
        ll sum=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        ll va=sqrt(sum);
        // int y=va;
        // int x=pow(y,2);
        if((va*va)==sum)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}

