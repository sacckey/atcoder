#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int q;
  cin >> s >> q;

  vector<int> f(q,-1);
  vector<char> c(q);

  for (int i = 0; i < q; i++)
  {
    int t;
    cin >> t;
    if(t==1) continue;
    int fi;
    cin >> fi >> c[i];
    f[i] = fi-1;
  }

  string head="",tail=s;
  for (int i = 0; i < q; i++)
  {
    if(f[i]==-1) {
      swap(head,tail);
    }
    else{
      if(f[i]){
        tail += c[i];
      }
      else{
        head += c[i];
      }
    }
  }
  reverse(head.begin(),head.end());
  string ans = head + tail;
  cout << ans << endl;
}