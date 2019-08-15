#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int cnt2=0,cnt4=0;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if(a%4==0){
      cnt4++;
      continue;
    }
    if(a%2==0) cnt2++;
  }

  int m = cnt4+cnt2/2;
  if(m>=n/2) cout << "Yes" << endl;
  else cout << "No" << endl;
}