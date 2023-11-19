#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int;
    *a = 10;
    cout<<a<<endl;
    cout<<*a<<endl;
    delete a;
    return 0;
}