#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(n+10);

  int ac=0,wa=0;
  for (int i = 0; i < m; i++)
  {
    int p;
    string s;
    cin >> p >> s;

    if(s=="WA"){
      if(a[p]==-1){
        continue;
      }
      else{
        a[p]++;
      }
    }
    else{
      if(a[p]==-1){
        continue;
      }
      else{
        wa+=a[p];
        ac++;
        a[p]=-1;
      }
    }
  }
  cout << ac << " " << wa << endl;  
}