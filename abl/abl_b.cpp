#include <bits/stdc++.h>
using namespace std;

int main(){
  long long a,b,c,d;
  cin >> a >> b >> c >> d;

  if((a<=c && c<=b) || (a<=d && d<=b) || (c<=b && b<=d) || (c<=a && a<=d)) puts("Yes");
  else puts("No");
}