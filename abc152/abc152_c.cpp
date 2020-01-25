#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int minn = 10000000;

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int p;
    cin >> p;
    if(p<=minn){
      ans++;
      minn = p;
    }
  }
  cout << ans << endl;
  
}