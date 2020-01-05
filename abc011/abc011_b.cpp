#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len = s.size();

  if(s[0]>'Z') s[0] -= 'a'-'A';

  for (int i = 1; i < len; i++)
  {
    if(s[i] < 'a') s[i] += 'a' - 'A';
  }
  cout << s << endl;  
}