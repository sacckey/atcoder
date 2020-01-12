#include <bits/stdc++.h>
using namespace std;

int main(){
  long long a,b,k;
  cin >> a >> b >> k;

  long long aa = max((long long)0,a-k);
  long long bb = max((long long)0,b-(max((long long)0,k-a)));
  cout << aa << " " << bb << endl;
}