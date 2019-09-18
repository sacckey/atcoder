#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,T;
  cin >> n >> T;
  int p;
  cin >> p;

  long long sum = T;
  for (int i = 1; i < n; i++)
  {
    int t;
    cin >> t;

    sum+=min(t-p,T);
    p=t;
  }

  cout << sum << endl;
  
}