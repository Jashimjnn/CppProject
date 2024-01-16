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
    int cnto=0;
    int cnte=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            cnte++;
        }
        else
        {
            cnto++;
        }
    }
    cout<<cnte<<" "<<cnto<<endl;
    return 0;
}