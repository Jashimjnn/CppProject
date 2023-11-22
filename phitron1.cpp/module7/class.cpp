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
int main()
{
    int n;
    cin >> n;
    //cin.ignore();
    //Student ar[n];
    Student *ar = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, ar[i].name);
        cin >> ar[i].roll >> ar[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].marks << endl;
    }
    return 0;
}