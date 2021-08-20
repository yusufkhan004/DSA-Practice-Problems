// this is sorted according to lexico graphic order of the keys (alphabetically sorted)

#include<iostream>
#include<map>
using namespace std;

int main() {

    map<string,int> menu;  //object
    menu["maggi"] = 15;
    menu["coldrink"] = 20;
    menu["franky"] = 40;
    menu["noodles"] = 60;
    menu["soft_drink"] = 30;
    menu["dosa"] = 99;

    //update query O(1)
    menu["dosa"] = menu["dosa"]*(1 + 0.1);

    menu.erase("maggi");

    //search
    string item;
    cin >> item;

    if(menu.count(item) == 0){
        cout << item << " is not present" << endl;
    }else{
        cout << item << " is present ,and its cost is "<< menu[item] << endl;
    }


    for(pair<string,int> x:menu){
        cout<< x.first << " - " << x.second << endl;
    }

    return 0;
}