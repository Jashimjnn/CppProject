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
// bool cmp(Student a, Student b)
// {
//     // if(a.marks<=b.marks)
//     // {
//     //     return true;
//     // }
//     // else
//     // {
//     //     return false;
//     // }
//     return a.marks<=b.marks;
// }
bool cmp(Student a, Student b)
{
    if(a.marks<b.marks)
    {
        return true;
    }
    else if(a.marks>b.marks)
    {
        return false;
    }
    else
    {
        // if(a.roll<b.roll)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        return a.roll<b.roll;
    }
    // return a.marks<=b.marks;
}
int main()
{
    int n;
    cin >> n;
    // cin.ignore();
    // Student ar[n];
    Student *ar = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, ar[i].name);
        cin >> ar[i].roll >> ar[i].marks;
    }
   sort(ar,ar+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].marks << endl;
    }

    return 0;
}