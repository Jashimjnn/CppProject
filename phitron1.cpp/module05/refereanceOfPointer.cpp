#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
// void fun(int *p)
// {
//     //*p =20;
//     p =NULL;
// }
void fun(int *&p)
{
    //*p =20;
    p =NULL;
}
int main()
{
    int val=10;
    int *ptr=&val;
    fun(ptr);
    // cout<<val<<endl;
    // cout<<*ptr<<endl;
    // cout<<*ptr<<endl;
    cout<<ptr<<endl;
    return 0;
}