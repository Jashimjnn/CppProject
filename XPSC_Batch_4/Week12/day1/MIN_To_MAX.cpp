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

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(mn>a[i])
            {
                mn = a[i];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(mn!=a[i])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}