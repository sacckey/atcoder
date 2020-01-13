#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
  long long r,tmp;

  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }
 
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

int main(){
  long long a,b;
  cin >> a >> b;

  long long g=gcd(a,b);
  cout << a*b/g << endl;
}