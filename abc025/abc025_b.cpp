#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b;
  cin >> n >> a >> b;

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    string s;
    int d;
    cin >> s >> d;

    d = max(d,a);
    d = min(d,b);
    if(s=="East") ans += d;
    else ans -= d;
  }

  if(ans<0) cout << "West ";
  if(ans>0) cout << "East ";
  cout << abs(ans) << endl;  
}