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
    int cnt2=0;
    int cnt3=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            cnt2++;
        }
        else if(v[i]%3==0)
        {
            cnt3++;
        }
    }
    cout<<cnt2<<" "<<cnt3<<endl;
    return 0;
}