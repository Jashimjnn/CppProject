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
        int n;
        cin>>n;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}