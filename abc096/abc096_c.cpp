#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w;
  cin >> h >> w ;

  vector<vector<char>> s(h+2,vector<char> (w+2));

  for (int i = 0; i < h+2; i++)
  {
    for (int j = 0; j < w+2; j++)
    {
      if(i==0||i==h+1){
        s[i][j] = '.';
      }
      else{
        if(j==0||j==w+1){
          s[i][j] = '.';
        }
        else cin >> s[i][j];
      }
    }  
  }
  int flg=0;
  for (int i = 1; i <= h; i++)
  {
    for (int j = 1; j <= w; j++)
    {
      if(s[i][j]=='#' && s[i-1][j]=='.' && s[i][j+1]=='.' && s[i+1][j]=='.' && s[i][j-1]=='.') flg=1;
    }
  }

  if(flg) cout << "No" << endl;
  else cout << "Yes" << endl;  
}