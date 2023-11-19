#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        cout << (count(str.begin(), str.end(), 'B') * 2 == str.size()?"YES\n" : "NO\n");
    }
}