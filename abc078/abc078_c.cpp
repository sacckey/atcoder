#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;

  cout << (100*(n-m)+1900*m)*(pow(2,m)) << endl;
}