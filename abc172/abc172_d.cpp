#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<long long> divs(10000010);

  for (int i = 1; i <= n; i++){
    for (int j = i; j <= n; j+=i)
    {
      divs[j]++;
    }
  }

  long long ans = 0;
  for (long long i = 1; i <= n; i++)
  {
    ans += i*divs[i];
  }
  cout << ans << endl;
}