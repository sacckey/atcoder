#include <bits/stdc++.h>
using namespace std;

int main(){
  long long a,r;
  int n;
  cin >> a >> r >> n;

  if(r==1){
    cout << a << endl;
    return 0;
  }

  for (int i = 0; i < n-1; i++)
  {
    if(a > 1000000000 / r){
      puts("large");
      return 0;
    }
    a *= r;
  }
  cout << a << endl;
}