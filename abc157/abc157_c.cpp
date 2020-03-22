#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> s(m),c(m);
  for (int i = 0; i < m; i++)
  {
    cin >> s[i] >> c[i];
  }

  for (int i = 0; i < 1000; i++)
  {
    bool flg = true;
    string is = to_string(i);
    if(is.size()==n){
      for (int j = 0; j < m; j++)
      {
        if(is[s[j]-1]-'0'!=c[j]) flg=false;
      }
      if(flg){
        cout << is << endl;
        return 0;
      }
    }
  }
  cout << -1 << endl;
}