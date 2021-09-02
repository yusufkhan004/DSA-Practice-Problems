#include<iostream>
#include<string>
using namespace std;

string convertIntoMilitary(string s){
    string time;
    int i;
    int h1 = (int)s[0] - '0';
    int h2 = (int)s[1] - '0';
    int hh = h1*10 + h2%10;

    if(s[8] == 'A'){
        if(hh == 12){
            time = "00";
            for(i=2;i<=7;i++){
                time.push_back(s[i]);
            }
        }else{
            for(i=0;i<=7;i++){
                time.push_back(s[i]);
            }
        }
    }else{
        if(hh == 12){
            time = "12";
            for(i=2;i<=7;i++){
                time.push_back(s[i]);
            }
        }else{
            hh = 12 + hh;
            time.append(to_string(hh));
            for(i=2;i<=7;i++){
                time.push_back(s[i]);
            }
        }
    }
    return time;

}

int main() {
    string s = "12:60:60AM";

    // int h1 = (int)s[1] - '0';
    // cout << h1;

    string st = convertIntoMilitary(s);

    cout << st << endl;

    return 0;
}