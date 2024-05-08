#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    double n;
    cin>>n;
    int x = n;
    if(x==n)
    {
        cout<<"int "<<x<<endl;
    }
    else
    {
        cout<<"float "<<x<<" "<<n-x<<endl;
    }
    return 0;
}