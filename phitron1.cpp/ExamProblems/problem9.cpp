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
    int sumN=0;
    int sumP=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>0)
        {
            sumP+=v[i];
        }
        else
        {
            sumN+=v[i];
        }
    }
    cout<<sumP<<" "<<sumN<<endl;
    return 0;
}