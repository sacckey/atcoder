#include <bits/stdc++.h>
using namespace std;

void solveA(){
  int x;
  cin >> x;

  if(x==7 || (x==5 || x==3)) cout << "YES" << endl;
  else cout << "NO" << endl;
}
void solveB(){
  string s;
  cin >> s;
  int ans = 1000;
  for(int i=0;i<s.size()-2;i++){
    int n = (s[i]-'0')*100 + (s[i+1]-'0')*10 + s[i+2]-'0';
    ans = min(ans,abs(n-753));
  }
  cout << ans << endl;
  
}
long n,ans=0;
void func(long a,int b){
  if (a>n) return;
  if (b == 7) ans++;
  func(a*10+3,b|1);
  func(a*10+5,b|2);
  func(a*10+7,b|4);  
}
void solveC(){
  cin >> n;
  func(0,0);
  cout << ans << endl;
}
void solveD(){
  int n;
  cin >> n;
  int cnt[101]={0};

  for(int i=2;i<=n;i++){
    int ii = i;
    for(int j=2;j<=n;j++){
      while(ii%j==0){
	ii/=j;
	cnt[j]++;
      }
    }
  }

  int cnt2=0,cnt4=0,cnt14=0,cnt24=0,cnt74=0;
  for(int i=2;i<=n;i++){
    if(cnt[i]>=2) cnt2++;
    if(cnt[i]>=4) cnt4++;
    if(cnt[i]>=14) cnt14++;
    if(cnt[i]>=24) cnt24++;
    if(cnt[i]>=74) cnt74++;
  }
  int ans = cnt74 + cnt24*(cnt2-1) + cnt14*(cnt4-1) + cnt4*(cnt4-1)*(cnt2-2)/2;
  cout << ans << endl;
}

int main(){
  solveD();
}
