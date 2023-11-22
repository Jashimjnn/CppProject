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
    if(n%2==0 && n>2)
    {
        Y;
    }
    else
    {
        N;
    }
    return 0;
}