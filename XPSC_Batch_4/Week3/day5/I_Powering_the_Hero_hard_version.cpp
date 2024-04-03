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
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        priority_queue<ll>pq;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                if(!pq.empty())
                {
                    sum+=pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}