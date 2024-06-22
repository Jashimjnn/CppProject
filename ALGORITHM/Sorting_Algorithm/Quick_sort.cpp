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
ll partition(vector<ll>&v,ll s,ll e)
{
    ll pivot  = v[s];
    ll cnt=0;
    for(ll i=s+1;i<=e;i++)
    {
        if(v[i]<=pivot)
        {
            cnt++;
        }
    }
    ll pivot_Index = s+cnt;
    swap(v[pivot_Index],v[s]);
    ll i=s,j=e;
    while(i<pivot_Index && j>pivot_Index)
    {
        while(v[i]<=pivot)
        {
            i++;
        }
        while(v[j]>pivot)
        {
            j--;
        }
        if(i<pivot_Index && j>pivot_Index)
        {
            swap(v[i++],v[j--]);
        }
    }
    return pivot_Index;
}
void quick_sort(vector<ll>&v,ll i,ll e)
{
    if(i>=e)
    {
        return;
    }
    ll p = partition(v,i,e);
    quick_sort(v,i,p-1);
    quick_sort(v,p+1,e);
}
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    quick_sort(v,0,n-1);
    for(ll i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}