#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int m=n;
  
  int sum=0;
  while(n>0){
    sum+=n%10;
    n/=10;
  }

  if(m%sum==0) cout << "Yes" << endl;
  else cout << "No" << endl;
}