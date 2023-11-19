#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define y cout << "YES" << endl;
#define n cout << "NO" << endl;
class person
{
public:
    string name;
    int age;
    person(string name, int age)
    {
        // this->name=name;
        (*this).name = name;
        // this->age=age;
        (*this).age = age;
    }
    void hello()
    {
        cout << "Hello" << endl;
    }
};
int main()
{
    person rakib("Rakib Hasan", 24);
    cout << rakib.name << " " << rakib.age << endl;
    return 0;
}