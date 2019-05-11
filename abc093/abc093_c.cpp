#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  int cnt=0;

  while(!(a[0]==a[1]&&a[1]==a[2])){
    sort(a,a+3);
    if(a[0]==a[1]){
      a[0]++;
      a[1]++;
      cnt++;
    }
    else if(a[1]==a[2]){
      a[0]+=2;
      cnt++;
    }
    else if(a[1]-a[0]==1){
      a[0]++;
      a[2]++;
      cnt++;
    }
    else{
      a[0]+=2;
      cnt++;
    }
  }
  cout << cnt << endl;
}