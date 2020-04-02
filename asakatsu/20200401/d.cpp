#include <bits/stdc++.h>
using namespace std;

vector<int> d(10);

bool check(int x){
  string xs = to_string(x);
  int l = xs.size();
  for (int i = 0; i < l; i++)
  {
    int xi = xs[i] - '0';
    if(d[xi]) return false;
  }

  return true;
}

int main(){
  int n,k;
  cin >> n >> k;
  for (int i = 0; i < k; i++)
  {
    int m;
    cin >> m;
    d[m] = 1;
  }

  for (int i = n; i < 1000000; i++)
  {
    if(check(i)){
      cout << i << endl;
      return 0;
    }
  }
}