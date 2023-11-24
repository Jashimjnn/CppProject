#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int  n;
    cin>>n;
    for(int i=n+1;;i++)
    {
        string str = to_string(i);
        set<int>se(str.begin(),str.end());
        if(str.size()==se.size())
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}