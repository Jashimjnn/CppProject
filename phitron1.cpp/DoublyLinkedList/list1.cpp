#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     list<string> myList;
     string s;
     while(true){
        cin>>s;
        if(s=="end")break;
        myList.push_back(s);
     }
    
    int q;
    cin>>q;
    string s1,s2;
    cin>>s1>>s2;
    q--;
    auto it = find(myList.begin(), myList.end(), s2);
    cout<<*it<<endl;
    while (q--)
    {
        cin >> s1;
        if (s1 == "visit")
        {
            cin>>s2;
            auto x = find(myList.begin(), myList.end(), s2); 
            if(x!=myList.end())it=x;
            else{
                cout<<"Not Available"<<endl;
                continue;
            }
        }
        else if(s1=="prev"){
            it--;
        }
        else if(s1=="next"){
            it++;
        }
        
        if (it != myList.end())
        {
            cout << *it << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
        
        auto it2= myList.begin();
        it2--;
        if(s1=="prev" && it==it2){
            it++;
        }
        else if(s1=="next" && it==myList.end()){
            it--;
        }
    }
}
