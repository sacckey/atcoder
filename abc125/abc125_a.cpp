#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,t;
  cin >> a >> b >> t;
  int time=0;
  int ans=0;
  
  while(time<=t){
    ans+=b;
    time+=a;
  }
  ans-=b;
    cout << ans << endl;
}