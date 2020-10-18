#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w;
  cin >> h >> w;

  vector<string> s(h);
  for (int i = 0; i < h; i++)
  {
    cin >> s[i];
  }
  
  int ans = 0;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w-1; j++)
    {
      if(s[i][j]=='.' && s[i][j+1]=='.') ans++;
    }    
  }

  for (int i = 0; i < w; i++)
  {
    for (int j = 0; j < h-1; j++)
    {
      if(s[j][i]=='.' && s[j+1][i]=='.') ans++;
    }
  }
  cout << ans << endl;
}