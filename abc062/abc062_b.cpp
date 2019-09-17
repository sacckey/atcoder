#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w;
  cin >> h >> w;
  char a[h][w];
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> a[i][j];
    }
  }

  cout << string(w+2,'#') << endl;
  for (int i = 0; i < h; i++)
  {
    cout << '#';
    for (int j = 0; j < w; j++)
    {
      cout << a[i][j]; 
    }
    cout << '#' << endl;
  }
  cout << string(w+2,'#') << endl;
}