#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  bool ok = false;
  for (int i = 0; i <= n; i+=4)
  {
    for (int j = 0; i+j <= n; j+=7)
    {
      if(i+j==n) ok = true;
    }
  }

  if(ok) puts("Yes");
  else puts("No");
}