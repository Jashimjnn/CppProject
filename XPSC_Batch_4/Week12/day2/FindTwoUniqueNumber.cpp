/**
 *    author:  Mohammad Jashim Uddin
**/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll setBit(ll n,ll pos)
{
    return ((n&(1<<pos))!=0);
}
void unique(ll ar[],ll n)
{
    ll xorSum=0;
    for(int i=0;i<n;i++)
    {
        xorSum = xorSum^ar[i];
    }
    ll tmpXor=xorSum;
    ll setbit=0;
    ll pos =0;
    while(setbit!=1)
    {
        setbit = xorSum&1;
        pos++;
        xorSum = xorSum>>1;
    }
    ll newXor=0;
    for(int i=0;i<n;i++)
    {
        if(setBit(ar[i],pos-1))
        {
           newXor = newXor^ar[i];
        }
    }
    cout<<newXor<<endl;
    cout<<(tmpXor^newXor)<<endl;
}
int main()
{
    ll ar[8] = {1,2,3,1,2,3,5,7};
    unique(ar,8);
    return 0;
}