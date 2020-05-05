#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  set<int> st;
  for (int i = 0; i < k; i++)
  {
    int d;
    cin >> d;
    for (int j = 0; j < d; j++)
    {
      int a;
      cin >> a;
      st.insert(a);      
    }
  }
  cout << n-st.size() << endl;  
}