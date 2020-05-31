#include <bits/stdc++.h>
using namespace std;

int main(){
  int h1,m1,h2,m2,k;
  cin >> h1 >> m1 >> h2 >> m2 >> k;

  int hm1 = 60*h1 + m1;
  int hm2 = 60*h2 + m2;

  cout << hm2 - hm1 - k << endl;
}