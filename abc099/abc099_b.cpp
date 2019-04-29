#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;

  int c = b-a-1;

  int ans=0;
  while(c>=0){
    ans+=c;
    c--;
  }
  ans-=a;
  
  cout << ans << endl;
  
}