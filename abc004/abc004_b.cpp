#include <bits/stdc++.h>
using namespace std;

int main(){
  char in[4][4];
  char ans[4][4];

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> in[i][j];
    }
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << in[3-i][3-j];
      if(j!=3) cout << " ";
    }
    cout << endl;
  }
}