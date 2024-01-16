#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    ll n;
    cin>>n;
    if(n>1000 && n<1500)
    {
        cout<<"I will buy Punjabi"<<endl;
    }
    else if(n>=1500)
    {
        cout<<"I will buy Punjabi"<<endl;
        cout<<"I will buy new shoes"<<endl;
        cout<<"Alisa will buy new shoes"<<endl;
    }
    else
    {
        cout<<"Bad luck!"<<endl;
    }
    return 0;
}