#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k,s;
  cin >> n >> k >> s;

  
  for (int i = 0; i < k; i++)
  {
    cout << s << " ";
  }

  int out = s+1;
  if(s==1000000000) out = 1;
  for (int i = 0; i < n-k; i++)
  {
    cout << out << " ";
  }
  cout << endl;  
}