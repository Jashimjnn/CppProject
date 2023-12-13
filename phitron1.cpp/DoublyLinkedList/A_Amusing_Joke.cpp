#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str;
    cin>>str;
    string str1;
    cin>>str1;
    string tmp;
    cin>>tmp;
    string tmp1 = str+str1;
    sort(tmp.begin(),tmp.end());
    sort(tmp1.begin(),tmp1.end());
    if(tmp==tmp1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}