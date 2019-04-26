#include <bits/stdc++.h>
using namespace std;

void solveA(){
  int a,b,c;
  cin >> a >> b >> c;
  cout << a*b/2 << endl;
}
void solveB(){
  int s;
  cin >> s;
  set<int> st;

  int m = 1;
  for(int i=0;i<2000000;i++){
    auto itr = st.find(s);
    if (itr != st.end()) {
      break;
    }

    st.insert(s);
    if (s%2 == 0) {
      s/=2;
    }
    else {s=3*s+1;}
    m++;
  }
  cout << m << endl;  
}

void solveBB(){
  int s;
  cin >> s;
  int flg[2000000] = {0};

  int m = 1;
  for(int i=0;i<2000000;i++){
    if (flg[s]==1) {
      break;
    }

    flg[s]=1;
    if (s%2 == 0) {
      s/=2;
    }
    else {s=3*s+1;}
    m++;
  }
  cout << m << endl;  
}

void solveC(){
  int n;
  cin >> n;

  int h[n];
  for (int i=0;i<n;i++){
    cin >> h[i];      
  }
  int ans = 0;
  bool flg = true;

  while(flg){
    int maxv=0;
    int maxp=0;
      for (int i=0;i<n;i++){
        if (h[i]>=maxv) {
	    maxv = h[i];
	    maxp = i;
	 }
      }
    ans += maxv;
    int downl = maxv;
    for (int i=maxp;i>=0;i--){
      int hi = h[i];
      h[i] = max(h[i]-downl,0);
      if (hi<downl) downl = hi;
    }
    
    int downr = maxv;
    for (int i=maxp+1;i<n;i++){
      int hi = h[i];
      h[i] = max(h[i]-downr,0);
      if (hi<downr) downr = hi;
    }

    flg = false;
    for (int i=0;i<n;i++){
      if (h[i]!=0) {
	flg = true;
      }
    }
  }
  cout << ans << endl;  
}
void solveD(){
}

int main(){
  solveBB();
}
