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
    for(int i=n-1;i>=0;i--)
    {
        if(i%2!=0)
        {
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}