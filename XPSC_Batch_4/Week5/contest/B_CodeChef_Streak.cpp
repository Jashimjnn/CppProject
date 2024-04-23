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
        vector<ll>v(n),v1(n);
        ll cntO=0,cntA=0;
        ll mxO = LLONG_MIN,mxA=LLONG_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]>0)
            {
                cntO++;
            }
            else
            {
              cntO=0;
            }
            if(cntO>mxO)
            {
                mxO=cntO;
            }

            if(v1[i]>0)
            {
                cntA++;
            }
            else
            {
              cntA=0;
            }
            if(cntA>mxA)
            {
                mxA=cntA;
            }
        }
        if(mxO>mxA)
        {
            cout<<"Om"<<endl;
        }
        else if(mxO<mxA)
        {
            cout<<"Addy"<<endl;
        }
        else
        {
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}