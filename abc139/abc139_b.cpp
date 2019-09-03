#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;

  int ans=0;
  int cnt=1;
  while(true){
    if(cnt>=b) break;
    cnt+=a-1;
    ans++;
  }
  cout << ans << endl;
}