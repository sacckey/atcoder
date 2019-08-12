#include <bits/stdc++.h>
using namespace std;

int main(){
  int k,x;
  cin >> k >> x;
  
  int left = max(-1000000,x+1-k);
  int right = min(1000000,x-1+k);
  for(int i=left;i<=right;i++){
    cout << i << " ";
  }
  cout << endl;


}