#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[] = {0,1,2,1,3,1,3,1,1,3,1,3,1};
  int x,y;
  cin >> x >> y;

  if(a[x]==a[y]) puts("Yes");
  else puts("No");
}