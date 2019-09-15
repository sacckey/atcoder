#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w;
  cin >> h >> w;

  vector<string> vec(h);
  for (int i = 0; i < h; i++)
  {
    cin >> vec[i];
  }

  int dx[8] = {-1,-1,-1,0,0,1,1,1};
  int dy[8] = {-1,0,1,-1,1,-1,0,1};
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if(vec[i][j]=='.'){
        int cnt = 0;
        for (int k = 0; k < 8; k++)
        {
          int y = i+dy[k];
          int x = j+dx[k];

          if(y<0 || y>=h || x<0 || x>=w) continue;
          if(vec[y][x]=='#') cnt++;
        }
        vec[i][j]=cnt+'0';
      }
    }
  }

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cout << vec[i][j];
    }
    cout << endl;
  }
}