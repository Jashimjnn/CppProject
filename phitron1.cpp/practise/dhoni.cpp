#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Cricketer {
public:
    int jersey_no;
    string country;
};

int main() {
    
    Cricketer* dhoni = new Cricketer;
    dhoni->jersey_no = 7;
    dhoni->country = "India";

    
    Cricketer* kohli = new Cricketer;

    
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;

    
    delete dhoni;

    
    cout << "Kohli's jersey number: " << kohli->jersey_no << endl;
    cout << "Kohli's country: " << kohli->country << endl;

    
    delete kohli;

   return 0;
}