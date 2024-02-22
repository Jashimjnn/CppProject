#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(a) (a).begin(),(a).end()
#define yes(b) b ? cout << "YES\n" : cout << "NO\n"

bool check_leap(int year) {
    bool x = false;
    if (year % 400 == 0) {
        x= true;
    }
    else if (year % 100 == 0) {
        x=false;
    }
    else if (year % 4 == 0) {
        x = true;
    }
    else {
        x= false;
    }

    return x;
}

// This function called by main
void somadan() {
    //input and d ,m,y
    string tarik,bar;
    cin>> tarik >> bar;
    
    // string to int
    int d = (10*(tarik[0] -'0')) + (tarik[1] -'0');
    int m = (10*(tarik[3] -'0')) + (tarik[4] -'0');
    int y = (tarik[6]-'0')*1000 + (tarik[7]-'0') *100 + (tarik[8]-'0')*10 + (tarik[9]-'0');

    //total days count    
    int total_tarik = 0;
    if(m == 2) {
        bool leap = check_leap(y);
        leap ? total_tarik = 29 : total_tarik = 28;
    }
    else if(m == 1 || m==3 || m==5 || m==7 || m== 8 || m== 10 || m==12) {
        total_tarik = 31;
    }
    else {
        total_tarik = 30;
    }




    // 1st date started index finding
    int start_day = 0;
    if(bar == "Sun") start_day =0;
    else if(bar == "Mon") start_day =1;
    else if(bar == "Tue") start_day =2;
    else if(bar == "Wed") start_day =3;
    else if(bar == "Thu") start_day =4;
    else if(bar == "Fri") start_day =5;
    else if(bar == "Sat") start_day =6;
    start_day++;
    
   
    
    
    
    // value assigning
    int left_tarik = total_tarik;
    int start_day2 = start_day;

    for(int i=d; i%7 != 0 ; ++i) start_day2++;
    start_day2 %= 7;




    //value assinging
    int arr[5][7] = {0};
    int j=1;  // j date printing count and index

    //frist line value assign (partial) 
    for(int i=start_day2; i<7; ++i) {
        arr[0][i] = j++;
        total_tarik--;
    }
    
    // 2nd, 3rd & 4rd  line value assigning
    for(int i=1; i<5; ++i) {
        for(int k=0; k<7; ++k) {
            if(!total_tarik) break;
            arr[i][k] =j++;
            total_tarik--;
        }
    }

    //frist line value assign (finally)
    for(int i=0; i<total_tarik; ++i) {
        arr[0][i] = j++;
    }





    // printing
    cout << "|---------------------------|\n|Sun|Mon|Tue|Wed|Thu|Fri|Sat|\n";

    for(int i=0; i<5; ++i) {
        cout << "|---------------------------|\n|";
        for(int k=0; k<7; ++k) {
            if(arr[i][k] == 0) cout << " - |";
            else if(arr[i][k] < 10) cout << "  " << arr[i][k] <<"|";
            else cout << ' ' << arr[i][k] << "|";
        }
        cout << endl;
    }
    cout << "|---------------------------|\n\n";
}



int main(void) {
    ll t = 1;
    cin >> t;
    while(t--) somadan();
    return 0;
}
