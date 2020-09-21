#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,t;
  cin >> s >> t;
  int lens = s.size();
  int lent = t.size();

  int maxlen = 0;
  for (int i = 0; i+lent <= lens; i++)
  {
    int cnt = 0;
    for (int j = 0; j < lent; j++)
    {
      if(s[i+j]==t[j]) cnt++;
    }
    maxlen = max(maxlen, cnt);    
  }
  cout << lent-maxlen << endl;
}