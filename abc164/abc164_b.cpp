#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;

  while(true){
    c-=b;
    if(c<=0) {puts("Yes");break;}
    a-=d;
    if(a<=0) {puts("No");break;}
  }
}