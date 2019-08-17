#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = a.size()-1; i >= 0; i-=2)
  {
    cout << a[i] << " ";
  }

  int m;
  if(n%2) m=1;
  else m=0;

  for (int i = m; i < n; i+=2)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}