#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int hh = n/3600;
  n%=3600;
  int mm = n/60;
  n%=60;
  int ss = n;
  printf("%02d:%02d:%02d\n",hh,mm,ss);
}