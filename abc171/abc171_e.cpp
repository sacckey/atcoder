#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  int al = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    al = al^a[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << (al^a[i]) << " ";
  }
  cout << endl;  
}