#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int chotfact = fact(n-1);
    return chotfact*n;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}