#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> c(n),s(n),f(n);
  for (int i = 0; i < n-1; i++)
  {
    cin >> c[i] >> s[i] >> f[i]; 
  }

  for (int i = 0; i < n-1; i++)
  {
    int t=0;
    for (int j = i; j < n-1; j++)
    {
      if(t<=s[j]) t=s[j]+c[j];
      else if(t%f[j]==0) t+=c[j];
      else t+=c[j]+f[j]-t%f[j];
    }
    cout << t << endl;
  }
  cout << 0 << endl;
}