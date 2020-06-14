#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> max_sushis(n);
  for (int i = 0; i < m; i++)
  {
    int a;
    cin >> a;
    int eater = lower_bound(max_sushis.begin(), max_sushis.end(), a) - max_sushis.begin()-1;
    if(eater==-1) {
      cout << -1 << endl;
      continue;
    }
    max_sushis[eater] = a;
    cout << n-eater << endl;
  }
}