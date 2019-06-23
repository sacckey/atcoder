#include <bits/stdc++.h>
using namespace std;
int main(){
  string a,b;
  cin >> a >> b;
  string ab=a+b;

  for (int i = 0; i < 1000; i++)
  {
    if(to_string(i*i)==ab){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  
}