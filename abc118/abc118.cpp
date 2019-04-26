#include <bits/stdc++.h>
using namespace std;

void solveA(){
  int a,b;
  cin >> a >> b;

  if (b%a==0){
    cout << a+b << endl;
  }
  else {
    cout <<b-a << endl;
  }
}
void solveB(){
  int n,m,k,a;
  cin >> n >> m;
  int cnt[m+1]={0};
  int ans = 0;

  for(int i=0; i<n; i++){
    cin >> k;
    for(int j=0;j<k;j++){
      cin >>a;
      cnt[a]++;
    }
  }

  for(int i=0;i<m+1;i++){
    //    cout << cnt[i] << endl;
    if (cnt[i]==n) ans++;
  }
  cout << ans << endl;
}
void solveC(){
  int n;
  cin >> n;
  int a[n];

  for (int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);

  int ans=1000000000;

  for (int i=0;i<n-1;i++){
    for (int j=i+1;j<n;j++)
      {
	int anss = a[j]%a[i];
	ans = min(ans,anss);
      }
  }
  
  if (ans==0){
    cout << a[0] << endl;
  }
  else{
    cout << 1 << endl;
  }


  
}
int gcd(int a,int b){
  int r,tmp;

  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }
 
  /* ユークリッドの互除法 */
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

void solveD(){
  int n;
  cin >> n;
  int a[n];

  for (int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);

  int cnt=0;
  int ans;

  ans=gcd(a[0],a[1]);
  for (int i=1;i<n;i++){
    ans=gcd(ans,a[i]);
  }
  
    cout << ans << endl;
}

int main(){
  solveD();
}
