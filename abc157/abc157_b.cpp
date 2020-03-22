#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[3][3];
  bool m[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> a[i][j];
      m[i][j] = false;
    }
  }
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int b;
    cin >> b;
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        if(b==a[i][j]) m[i][j] = true;
      }
    }
  }
  bool flg = false;
  for (int i = 0; i < 3; i++)
  {
    flg = flg || (m[i][0]&&m[i][1]&&m[i][2]);
  }
  for (int i = 0; i < 3; i++)
  {
    flg = flg || (m[0][i]&&m[1][i]&&m[2][i]);
  }
  flg = flg || (m[0][0]&&m[1][1]&&m[2][2]);
  flg = flg || (m[0][2]&&m[1][1]&&m[2][0]);

  if(flg) cout << "Yes" << endl;
  else cout << "No" << endl;
}