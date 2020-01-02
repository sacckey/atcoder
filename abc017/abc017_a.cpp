#include <bits/stdc++.h>
using namespace std;

int main(){
  int ans = 0;
  for (int i = 0; i < 3; i++)
  {
    int s,e;
    cin >> s >> e;
    ans += s*e;
  }
  cout << ans/10 << endl;  
}