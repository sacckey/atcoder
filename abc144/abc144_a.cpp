#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;

  if(a>=1 && a<=9 && b>=1 && b<=9){
    cout << a*b << endl;
  }
  else{
    cout << -1 << endl;
  }
}