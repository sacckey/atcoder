#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,x;
  cin >> n >> x;

  int b = 0;
  int cnt = 1;

  for (int i = 0; i < n; i++)
  {
    int l;
    cin >> l;
    
    b+=l;
    if (b>x){
      cout << cnt << endl;
      return 0;
    }
    cnt++;
    
  }
  cout << cnt << endl;



}