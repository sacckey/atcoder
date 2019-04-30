#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;

  int ans=0;
  for (int i = 0; i < n; i++)
  {
    set<char> c;
    int j=0;
    for (; j < i; j++)
    {
      c.insert(s[j]);
    }
    set<char> d;
    for (int k = j; k < n; k++)
    {
      d.insert(s[k]);
    }
    set<char> ansset;
    set_intersection(c.begin(), c.end(),d.begin(), d.end(),inserter(ansset, ansset.end()));
    ans=max(ans,(int)ansset.size());
  }
  cout << ans << endl; 
  
}