#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n=s.size();

  int cnt = 1;
//  char p = s[0];
  bool flg =false;
  for (int i = 1; i < n; i++)
  {
    if(s[i]==s[i-1] && !(flg)){
      if(i==n-1) break;
      i++;
      flg = true;
    }
    else{
      flg = false;
    }
    cnt++;
  }
  cout << cnt << endl;
  
}