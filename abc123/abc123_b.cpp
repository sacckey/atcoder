#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[5];
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

  int min = 9;
  int minad = 0;

  for(int i=0;i<5;i++){
    if(a[i]%10 < min && a[i]%10 != 0){
      min = a[i]%10;
      minad = i;
    }
  }
  int ans = 0;
  for(int i=0;i<5;i++){
    if(i==minad || a[i]%10==0){
      ans += a[i];
    }
    else{
      ans = ans + 10-a[i]%10 + a[i];
    }
  }
  
  cout << ans << endl;

}
