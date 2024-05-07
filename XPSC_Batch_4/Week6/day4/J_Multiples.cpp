#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int a,b;
    cin>>a>>b;
    if(b>a)
    {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if(a%b==0)
    {
        cout<<"Multiples"<<endl;
    }
    else
    {
        cout<<"No Multiples"<<endl;
    }
    return 0;
}