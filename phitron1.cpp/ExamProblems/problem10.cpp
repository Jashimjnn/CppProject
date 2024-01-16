#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int x,va;
    cin>>x>>va;
    for(int i=0;i<n;i++)
    {
        if(i==x)
        {
            v[i]=va;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}