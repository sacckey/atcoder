#include <bits/stdc++.h>
using namespace std;

int main(){
  int m,d;
  cin >> m >> d;

  int ans=0;
  for (int i = 1; i <= m; i++)
  {
    for (int j = 1; j <= d; j++)
    {
      int d1=j%10;
      int d10=j/10;
      if(d1>=2  && d10>=2 && d1*d10==i) ans++;
    }
    
  }
  cout << ans << endl;
}