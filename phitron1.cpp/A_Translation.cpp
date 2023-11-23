#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str,str1;
    cin>>str>>str1;
    reverse(str.begin(),str.end());
    if(str.compare(str1))
    {
        N;
    }
    else
    {
        Y;
    }
    return 0;
}