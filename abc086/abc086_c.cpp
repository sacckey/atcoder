#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int>t(n+1),x(n+1),y(n+1);

  t[0]=0,x[0]=0,y[0]=0;
  for (int i = 1; i <= n; i++) cin >> t[i] >> x[i] >> y[i];

  for (int i = 0; i < n; i++)
  {
    int dt=t[i+1]-t[i];
    int dxy=abs(x[i+1]-x[i]+y[i+1]-y[i]);
    if(dt<dxy || dt%2!=dxy%2){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}