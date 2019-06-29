#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  set<int> st;

  for(int i=0;i<n;i++){
    int d;
    cin >> d;
    st.insert(d);
  }

  cout << st.size() << endl;
}