#include <bits/stdc++.h>
using namespace std;

int main(){
  string w;
  cin >> w;
  int n = w.size();

  for (int i = 0; i < n; i++)
  {
    if(w[i]!='a' && w[i]!='i' && w[i]!='u' && w[i]!='e' && w[i]!='o') cout << w[i];
  }
  cout << endl;  
}