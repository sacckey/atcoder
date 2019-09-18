#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;

  int cnt = a;
  while(cnt<=10000){
    if(cnt%b==c){
      cout << "YES" << endl;
      return 0;
    }
    cnt+=a;
  }
  cout << "NO" << endl;

}