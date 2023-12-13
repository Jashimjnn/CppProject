#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    list<int>list1={1,2,3,4,5,6,4,3,5,7,8,4};
    cout<<list1.front()<<endl;
    cout<<list1.back()<<endl;
    cout<<*next(list1.begin(),4)<<endl;
    return 0;
}