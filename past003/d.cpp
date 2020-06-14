#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  vector<string> s(5);
  vector<int> anss;

  cin >> n;
  for (int i = 0; i < 5; i++) cin >> s[i];

  for (int i = 1; i <= n; i++)
  {
    int cnt = 0;
    for (int j = 0; j < 5; j++)
    {
      for (int k = 4*i-3; k < 4*i; k++)
      {
        if(s[j][k]=='#') cnt++;
      }      
    }
    if(cnt==7) anss.push_back(7);
    if(cnt==8) anss.push_back(1);
    if(cnt==9) anss.push_back(4);
    if(cnt==13) anss.push_back(8);
    if(cnt==11){
      if(s[3][4*i-3]=='#') anss.push_back(2);
      else if(s[1][4*i-1]=='#') anss.push_back(3);
      else anss.push_back(5);
    }
    if(cnt==12){
      if(s[1][4*i-3]=='#' && s[1][4*i-1]=='.') anss.push_back(6);
      else if(s[3][4*i-3]=='#') anss.push_back(0);
      else anss.push_back(9);
    }
  }
  for(int ans:anss) cout << ans;
  cout << endl;
}