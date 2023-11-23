#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class Student
{
public:
    string name;
    int cls;
    char ch;
    int id;
    int math;
    int Eng;
};
bool cmp(Student a,Student b)
{
    if(a.Eng>b.Eng)
    {
        return true;
    }
    else if(a.Eng<b.Eng)
    {
        return false;
    }
    else
    {
        if(a.math>b.math)
        {
            return  true;
        }
        else if(a.math<b.math)
        {
            return false;
        }
        else
        {
            return a.id<b.id;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    Student *ar = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].cls >> ar[i].ch >> ar[i].id >> ar[i].math >> ar[i].Eng;
    }
    sort(ar,ar+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].cls<<" "<<ar[i].ch<<" "<<ar[i].id<<" "<<ar[i].math<<" "<<ar[i].Eng<<endl;
    }
    return 0;
}