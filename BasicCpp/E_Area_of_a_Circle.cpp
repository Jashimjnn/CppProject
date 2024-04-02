#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    double r;
    cin>>r;
    double area = 3.141592653*(r*r);
    cout<<fixed<<setprecision(9)<<area<<endl;
    return 0;
}