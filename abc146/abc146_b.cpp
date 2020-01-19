#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;

  for (int i = 0; i < s.size(); i++)
  {
    char c = s[i];
    c-='A';
    c+=n;
    c%=26;
    c+='A';
    cout << (char) c;
  }
  cout << endl;  
}