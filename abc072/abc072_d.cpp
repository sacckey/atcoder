#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  bool flg = false;
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    int p;
    cin >> p;

    if(i==p){
      ans++;
      if(flg){
        ans--;
        flg = false;
      }
      else flg = true;
    }
    else{
      if(flg) flg = false;
    }
  }

  cout << ans << endl;  
}