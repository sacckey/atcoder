#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<long long> l(90);
  l[0]=2;
  l[1]=1;
  for (int i = 2; i < 90; i++)
  {
    l[i] = l[i-1] + l[i-2];
  }

  cout << l[n] << endl;
  
}