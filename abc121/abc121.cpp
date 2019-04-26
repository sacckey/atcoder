#include <bits/stdc++.h>
using namespace std;

void solveA(){
  int H,W,h,w;
  cin >> H >> W >> h >> w;

  cout << H*W- (h*W+w*H) + h*w << endl;
}
void solveB(){
  int n,m,c;
  cin >> n >> m >> c;
  int ans=0;

  int b[m];

  for(int i =0 ;i<m ; i++){
    cin >> b[i];
  }

  for(int i =0 ;i<n ; i++){
    int sum=0;
    for(int j =0 ;j<m ; j++){
      int a;
      cin >> a;
      sum += a * b[j];		   
    }
    if (sum+c > 0) ans++;
  }

  cout << ans << endl;
}
void solveC(){
  long long n,m;
  cin >> n >> m;
  map<long,long> mp;
  long long k = 0;
  long long ans = 0;

  long long a,b;
  for(long long i = 0; i<n ; i++){
    cin >> a >> b;
    if (mp.count(a) == 0){
      mp[a] = b;
    }
    else{
      mp[a] += b;
    }
  }
  for (auto x: mp)
    {
      if (x.second >= m){
	ans += m*x.first;
	break;
      }
      else{
	ans += x.second*x.first;
	m -= x.second;
      }
      
    }
  cout << ans << endl;
  
}

void solveD(){
  long long a,b;
  cin >> a >> b;
  long long top = 0;
  long long count = (b-a+1);
  if(a%2==1){
    top=a;
    count--;
  }

  long long ans;
  if(count/2%2==0) ans = 0;
  else ans = 1;

  if(count%2==1) ans = ans ^ b;

  cout << (ans^top) << endl;
}

int main(){
  solveD();
}
