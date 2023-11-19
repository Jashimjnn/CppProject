#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a, b;
    //    a.roll=29;
    //    a.cgpa=4.90;
    //    char tmp[100]="Jashim";
    //    strcpy(a.name,tmp);
    cin >> a.name >> a.roll >> a.cgpa;
    cin >> b.name >> b.roll >> b.cgpa;
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;
    return 0;
}