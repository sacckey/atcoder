#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<long long,long long>> ba(n);

  for (int i = 0; i < n; i++)
  {
    long long a,b;
    cin >> a >> b;
    ba[i] = make_pair(b,a);
  }

  sort(ba.begin(),ba.end());

  int sum=0;
  for (int i = 0; i < n; i++)
  {
    sum+=ba[i].second;
    if(sum>ba[i].first){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}