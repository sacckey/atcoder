#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,k;
  cin >> n >> a >> b >> k;
  set<int> st;
  st.insert(a);
  st.insert(b);
  for (int i = 0; i < k; i++)
  {
    int p;
    cin >> p;
    st.insert(p);
  }
  if(st.size() == k+2) puts("YES");
  else puts("NO");
}