#include <bits/stdc++.h>
using namespace std;

int main(){
  long long h;
  cin >> h;

  long long b = 1;
  while(true){
    if(h<b) break;
    b*=2;
  }
  cout << b - 1 << endl;
}