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
    transform(str.begin(),str.end(),str.begin(),::toupper);
    transform(str1.begin(),str1.end(),str1.begin(),::toupper);
    cout<<str.compare(str1)<<endl;
    return 0;
}