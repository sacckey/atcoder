#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;

  set<int> from1;
  set<int> ton;
  for (int i = 0; i < m; i++)
  {
    int a,b;
    cin >> a >> b;

    if(a==1) from1.insert(b);
    if(b==n) ton.insert(a);
  }

  for(int x:from1){
    if(ton.find(x)!=ton.end()){
      cout << "POSSIBLE" << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;
}