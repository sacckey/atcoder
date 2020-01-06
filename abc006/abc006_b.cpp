#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int> a(1000010);
  a[0] = 0;
  a[1] = 0;
  a[2] = 0;
  a[3] = 1;
  for (int i = 4; i < a.size(); i++)
  {
    a[i] = a[i-1] + a[i-2] + a[i-3];
    a[i] %= 10007;
  }

  cout << a[n] << endl;
}