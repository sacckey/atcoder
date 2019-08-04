#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> h(n);

  for (int i = 0; i < n; i++)
  {
    cin >> h[i]; 
  }

  bool flg = true;
  int maxi=h[0];
  for (int i = 0; i < n-1; i++)
  {
    if(h[i]<h[i+1]){
      maxi=h[i+1];
    }
    if(h[i]>h[i+1]){
      if(maxi-h[i+1]>1) flg = false;
    }
  }
  if(flg) cout << "Yes" << endl;
  else cout << "No" << endl;
}