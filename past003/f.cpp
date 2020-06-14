#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  char mid;

  vector<map<char,int>> cnts(n);
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    if(n==1){
      cout << s[0] << endl;
      return 0;
    }
    for (int j = 0; j < n; j++)
    {
      if(n%2==1 && i==n/2){
        mid = s[0];
      }
      cnts[i][s[j]]++;
    }    
  }

  string ans1 = "";
  string ans2 = "";
  for (int i = 0; i < n/2; i++)
  {
    for(char c='a'; c<='z'; c++){
      if(cnts[i][c]>=1 && cnts[n-1-i][c]>=1){
        ans1.push_back(c);
        ans2.push_back(c);
        break;
      }
      if(c=='z'){
        cout << -1 << endl;
        return 0;
      }
    }
  }
  if(n%2==1){
    ans2.push_back(mid);
  }
  reverse(ans2.begin(),ans2.end());
  cout << ans1 + ans2 << endl;
}