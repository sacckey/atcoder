#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,n;
  cin >> a >> b >> n;

  for (int i = n; i < 1000000000; i++)
  {
    if((i%a==0) && (i%b==0)){
      cout << i << endl;
      return 0;
    }
  }
  
}