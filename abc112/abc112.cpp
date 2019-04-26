#include <bits/stdc++.h>
using namespace std;

void solveA(){
  int n,a,b;
  cin >> n;

  if (n==1) cout << "Hello World" << endl;
  else {
    cin >> a >> b;
    cout << a+b << endl;
  }
}
void solveB(){
  int n,t,ci,ti;
  cin >> n >> t;
  int ans = 2000;
  
  for(int i=0;i<n;i++){
    cin >> ci >> ti;
    if (ci<=ans && ti<=t) ans = ci;
  }
  if (ans==2000) cout << "TLE" << endl;
  else cout << ans << endl;  
}

void solveC(){
  int n;
  cin >> n;
  int x[n],y[n],h[n];
  int xt,yt,ht;
  int flg=1;

  for(int i=0;i<n;i++){
    cin >> x[i] >> y[i] >> h[i];
    if(h[i]!=0 && flg) xt=x[i],yt=y[i],ht=h[i];
  }

  int cx,cy,ch;
  for(int i=0;i<=100;i++){
    for(int j=0;j<=100;j++){
      ch = ht + abs(xt-i) + abs(yt-j);
      for(int k=0;k<n;k++){
	if (max(ch-abs(x[k]-i)-abs(y[k]-j),0)==h[k]){
	  if (k==n-1){
	    cx = i;
	    cy = j;
	    i=100;
	    j=100;
	    break;
	  }
	}
	else break;
      }
    }
  }
  cout << cx << " " << cy << " " << ch << endl;  
}
void solveD(){
  int n,m;
  cin >> n >> m;

  int ans = 1;
  for(int i=m/n;;i--){
    if (m%i==0) {
      ans=i;
      break;
    }
  }
  cout << ans << endl;
}

int main(){
  solveD();
}
