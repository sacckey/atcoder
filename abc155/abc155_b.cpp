#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  bool flg = true;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;

    if(a%2==0){
      if(a%3!=0 && a%5!=0) flg = false;
    }
  }
  if(flg)puts("APPROVED");
  else puts("DENIED");
  
}