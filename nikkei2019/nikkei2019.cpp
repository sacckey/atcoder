#include <bits/stdc++.h>
using namespace std;

void solveA(){
  int n,a,b;
  cin >> n >> a >> b;

  cout << min(a,b) << " " << max(0,a+b-n) << endl;
}
void solveB(){
  int n;
  string a,b,c;
  cin >> n >> a >> b >> c;

  int ans = 0;
  for(int i=0;i<n;i++){
    set<int> st;
    st.insert(a[i]);
    st.insert(b[i]);
    st.insert(c[i]);
    ans += st.size()-1;
  }
  cout << ans << endl;  
}

void solveC(){
  int n;
  long long a[n],b[n],c[n];

  for(int i=0;i<n;i++){
    cin >> a[i] >> b[i];
    c[i]=a[i]-b[i];
  }

  


  
}
void solveD(){
}

int main(){
  solveB();
}
