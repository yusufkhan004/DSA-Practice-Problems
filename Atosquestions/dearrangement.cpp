#include <bits/stdc++.h>
using namespace std;
int countDer(int n)
{
  if (n == 1) return 0;
  if (n == 2) return 1;
  return (n - 1) * (countDer(n - 1) + countDer(n - 2));
}
int main(){
    int n;
    cin >> n;
    cout << countDer(n) << endl;
}