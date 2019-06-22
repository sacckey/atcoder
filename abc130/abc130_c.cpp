#include <bits/stdc++.h>
using namespace std;

int main(){
  long long w,h,x,y;
  cin >> w >> h >> x >> y;

  int ans=0;
  if((double)x==w/2.0 && (double)y==h/2.0) ans++;

  
   printf("%.10f",w*h/2.0);
//  cout << (double) w*h/2.0;
  cout << " " << ans << endl;
}