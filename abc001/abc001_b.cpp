#include <bits/stdc++.h>
using namespace std;

int main(){
  int m;
  cin >> m;

  double km = m/1000.0;
  if(km<0.1) cout << "00" << endl;
  else if(km>=0.1 && km<=5.0){
    km *= 10.0;
    printf("%02d\n",(int)km);
  }
  else if(km>=6.0 && km<=30.0) printf("%02d\n",(int)km+50);
  else if(km>=35.0 && km<=70.0){
    km -= 30.0;
    km /= 5.0;
    km += 80.0;
    printf("%02d\n",(int)km);
  }
  else cout << 89 << endl;
}