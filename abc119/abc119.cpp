#include <bits/stdc++.h>
using namespace std;

void solveA(){
  string s;
  cin >> s;

  int m=10*(s[5]-48) + s[6] -48;
  int d=10*(s[8]-48) + s[9] -48;

  if(m<=4 && d<=30){
    cout << "Heisei" << endl;
  }
  else{
    cout << "TBD" << endl;
  }
}
void solveB(){
  int n;
  cin >> n;
  double ans = 0.0;

  double x;
  string u;
  for(int i=0;i<n;i++){
    cin >> x >> u;
    if(u=="JPY"){
      ans += x;
    }
    else{
      ans += x*380000;
    }
  }
  cout << ans << endl;

}
void solveC(){
  int n,a,b,c;
  cin >> n >> a >> b >> c;

  int l[n];
  for(int i=0;i<n;i++){
    cin >> l[i];
  }

  int minA=10000;
  for (int bit = 0; bit < (1<<n); ++bit)
    {
        vector<int> S;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) {
                S.push_back(i);
            }
        }

	int sum = 0;
	int cost=0;
        for (int i = 0; i < (int)S.size(); ++i) {
	  sum += l[S[i]];
	  cost+=10;
        }
	cost-=10;
	minA =min(minA,abs(b-sum)+cost);
    }
  cout << minA << endl;
}

void solveD(){
}

int main(){
  solveC();
}
