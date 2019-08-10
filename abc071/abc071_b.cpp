#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;

  bool flg = false;
  for (char c = 'a'; c <= 'z'; c++)
  {
    flg = false;
    for (int i = 0; i < (int)s.size(); i++)
    {
      if(c==s[i]){
        flg = true;
        break;
      }
    }
    if(!flg){
      cout << c << endl;
      return 0;
    }
  }
  cout << "None" << endl;
}