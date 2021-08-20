#include<iostream>
#include<map>
#include<list>
using namespace std;

int main() {

    map<string, list<string>> phonebooks;

    phonebooks["Anwar"].push_back("1152");
    phonebooks["Anwar"].push_back("11152");
    phonebooks["Anwar"].push_back("11452");
    phonebooks["Anwar"].push_back("13452");


    phonebooks["irsahd"].push_back("11452");
    phonebooks["irsahd"].push_back("4123452");
    phonebooks["irsahd"].push_back("11412");
    
    phonebooks["murtuza"].push_back("14352");
    phonebooks["murtuza"].push_back("14351");
    
    phonebooks["shayaan"].push_back("4152");
    
    for(pair<string,list<string>> x:phonebooks) {
        cout << x.first <<" - "<< endl;
    }




    return 0;
}