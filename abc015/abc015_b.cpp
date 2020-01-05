#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int cnt = 0;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if(a!=0){
      sum+=a;
      cnt++;
    }
  }
  cout << (sum+cnt-1)/cnt << endl;
  
}