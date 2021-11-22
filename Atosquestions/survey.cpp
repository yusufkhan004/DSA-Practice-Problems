#include<bits/stdc++.h>
using namespace std;
int main(){
    int lengthofservey,noofstates,monthno;
    cin>> lengthofservey >> noofstates >> monthno;
    int arr[lengthofservey] = {4,5,7,9,3,2,5,1,3,2,4,1};

    int noofcountry =  lengthofservey/noofstates;
    
    int currentcountry = monthno/noofstates;

    if(monthno/noofstates != 0){
        currentcountry = currentcountry + 1;
    }
    cout << currentcountry << " " << arr[monthno-1]<< endl; 

    return 0;
}