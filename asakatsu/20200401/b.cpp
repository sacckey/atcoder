#include <bits/stdc++.h>
using namespace std;

int main(){
  long long a,b,c;
  cin >> a >> b >> c;

  long long ab = a*b%(1000000007);
  cout << ab*c%(1000000007) << endl;
}