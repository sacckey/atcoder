#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k,m;
  cin >> n >> k >> m;

  int sum = n*m;
  for (int i = 0; i < n-1; i++)
  {
    int a;
    cin >> a;
    sum-=a;
  }

  if(sum>k){
    cout << -1 << endl;
  }
  else{
    cout << max(0,sum) << endl;
  }  
}