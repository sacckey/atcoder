#include <bits/stdc++.h>
using namespace std;

void solveA(){
  int n,k;
  cin >> n >> k;

  if (k <= (n+1)/2){
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}
void solveB(){
  int a[3],b[3];
  int cnt[4] = {0};
  bool flg = true;

  for(int i=0;i<3;i++){
    cin >> a[i] >> b[i];
    cnt[a[i]-1] ++;
    cnt[b[i]-1] ++;
  }

  for(int i=0;i<4;i++){
    if (cnt[i] >= 3) flg = false;
  }
  if (flg) cout << "YES" << endl;
  else cout << "NO" << endl;
  
}
void solveC(){
  long long k,a,b;
  cin >> k >> a >> b;
  bool flg = true;
  long long bis = 1;
  long long del = b-a;

  if (del<=2) flg = false;

  for(long long i=1;i<=k;i++){
    if (bis>=a && (k-i>=1 && flg)){
	bis+=del;
	i ++;
    }
    else {
      bis ++;
    }
  }
  cout << bis << endl;

}
void solveD(){
}

int main(){
  solveC();
}
