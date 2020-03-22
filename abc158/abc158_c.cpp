#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;

  for (int i = 1; i < 100000; i++)
  {
    int aa = i*0.08;
    int bb = i*0.1;
    if(aa==a && bb==b){
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}