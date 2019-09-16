#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k,q;
  cin >> n >> k >> q;

  int sum = max(0,q-k+1);
  vector<int> vec(n);

  for (int i = 0; i < q; i++)
  {
    int a;
    cin >> a;

    vec[a-1]++;
  }

  for (int i = 0; i < n; i++)
  {
    if(vec[i]>=sum) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  
  
}