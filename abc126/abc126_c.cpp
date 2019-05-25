#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;

  double m = (double)n;
  double ans = 0.0;
  double half=1.0;
  while(n>0){
    if(k>n){
      k=(k+1)/2;
      half /=2.0;
    }
    else{
      ans+=(n-k+1)*(1/m)*half;
      n=k-1;
      k=(k+1)/2;
      half/=2.0;
    }
  }
  printf("%.12f",ans);
}