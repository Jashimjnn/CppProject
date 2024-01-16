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
    vector<int>v1(n,0);
    int j=0;
    int i=0;
    while(i<n)
    {
        //j++;
        if(v[i]!=0)
        {
            v1[j++]=v[i];
        }
        i++;

        //j++;
    }
    for(auto x:v1)
    {
        cout<<x<<" ";
    }
    return 0;
}