#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,q;
  cin >> n >> m >> q;
  vector<vector<int>> solved(n,vector<int>());
  vector<int> points(m,n);
  vector<int> anss;

  for (int i = 0; i < q; i++)
  {
    int qi,ni;
    cin >> qi >> ni;
    ni--;

    if(qi==1){
      int sum = 0;
      for(int sol : solved[ni]){
        sum += points[sol];
      }
      anss.push_back(sum);
    }
    else{
      int mi;
      cin >> mi;
      mi--;
      points[mi]--;
      solved[ni].push_back(mi);
    }
  }
  for(int ans : anss) cout << ans << endl;
}