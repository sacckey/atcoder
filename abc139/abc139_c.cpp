#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,p;
  cin >> n >> p;

  int cnt=0;
  int ans=0;
  for (int i = 1; i < n; i++)
  {
    int h;
    cin >> h;

    if(h<=p){
      cnt++;
      ans=max(ans,cnt);
    }
    else{
      ans=max(ans,cnt);
      cnt=0;
    }
    p=h;
  }
  cout << ans << endl;
}