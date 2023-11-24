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
    int cnt=0;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if(p<(q-1))
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}