#include <bits/stdc++.h>
using namespace std;

int main(){
  int c[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> c[i][j];
    }
  }

  int flg=1;
  for (int i = 0; i < 3; i++)
  {
    if(!(c[i][0]-c[(i+1)%3][0]==c[i][1]-c[(i+1)%3][1] && c[i][0]-c[(i+1)%3][0]==c[i][2]-c[(i+1)%3][2])) flg=0;
  }
  for (int i = 0; i < 3; i++)
  {
    if(!(c[0][i]-c[0][(i+1)%3]==c[1][i]-c[1][(i+1)%3] && c[0][i]-c[0][(i+1)%3]==c[2][i]-c[2][(i+1)%3])) flg=0;
  }
  if (flg) cout << "Yes" << endl;
  else cout << "No" << endl;
  
}