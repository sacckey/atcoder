#include <bits/stdc++.h>
using namespace std;

int main (){
  int n;
  cin >> n;
  vector<int> a(n+2);
  a[0]=0;
  a[n+1]=0;
  long long sum=0;

  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    sum+=abs(a[i]-a[i-1]);
  }
  sum+=abs(a[n]);

  for (int i = 1; i <= n; i++)
  {
    int diff = abs(a[i+1]-a[i-1]) - abs(a[i]-a[i-1]) - abs(a[i+1]-a[i]);
    cout << sum+diff << endl;
  }
}