#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,n;
  cin >> a >> b >> n;

  int m = max(a,b);
  cout << (n+m-1)/m << endl;

  
}