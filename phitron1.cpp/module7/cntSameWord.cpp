#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str;
    getline(cin,str);
    string str1;
    cin>>str1;
    stringstream ss(str);
    int cnt=0;
    string word;
    while(ss>>word)
    {
        if(word==str1)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}