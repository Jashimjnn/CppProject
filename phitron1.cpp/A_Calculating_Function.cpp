#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll  n;
    cin>>n;
    if(n%2==0)
    {
        cout<<(n/2)<<endl;
    }
    else
    {
        cout<<-(n+1)/2<<endl;
    }
    return 0;
}