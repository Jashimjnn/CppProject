#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class Freq
{
public:
    char value;
    int count;
};
bool cmp(Freq a, Freq b)
{
    if(a.count==b.count)
    {
        return a.value<b.value;
    }
    else
    {
        return a.count > b.count;
    }
}
int main()
{
    string str;
    cin >> str;
    Freq f[26];
    for (int i = 0; i < 26; i++)
    {
        f[i].value = char(i + 'a');
        f[i].count = 0;
    }
    for (char x : str)
    {
        int ascii = int(x - 'a');
        f[ascii].count++;
    }
    sort(f, f + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        if (f[i].count > 0)
        {
            for (int j = 0; j < f[i].count; j++)
            {
                cout << f[i].value;
            }
        }
    }
    return 0;
}