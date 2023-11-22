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
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
    {
        return true;
    }
    else if(a.marks<b.marks)
    {
        return false;
    }
    else
    {
        return a.roll<b.roll;
    }
}
int main()
{
    int n;
    cin >> n;
    Student *a = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a, a + n, cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}