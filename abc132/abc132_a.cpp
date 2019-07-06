#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  set<char> cset;
  for (int i = 0; i < 4; i++)
  {
    cset.insert(s[i]);
  }
  
  if(((s[0]==s[1]&&s[2]==s[3])||(s[0]==s[3]&&s[1]==s[2])||(s[0]==s[2]&&s[1]==s[3]))&&cset.size()==2) cout << "Yes" << endl;
  else cout << "No" << endl;
}