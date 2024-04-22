#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    list<ll>lst;
    vector<ll>v1;
    ll left=0,right=0;
    while(right<n)
    {
        if(v[right]<0)
        {
            lst.push_back(v[right]);
        }
        if((right-left+1)==k)
        {
            ll flag;
            if(lst.empty())
            {
                flag = 0;
            }
            else
            {
                flag = lst.front();
            }
            v1.push_back(flag);
            if(v[left]<0 && !lst.empty())
            {
                lst.pop_front();
            }
            left++;
        }
        right++;
    }
    for(auto x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}