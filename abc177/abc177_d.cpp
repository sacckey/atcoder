#include <bits/stdc++.h>
using namespace std;

class UnionFind {
public:
vector<int> Parent;

UnionFind(int N) {
  Parent = vector<int>(N, -1);
}

int root(int A) {
  if (Parent[A] < 0) return A;
    return Parent[A] = root(Parent[A]);
  }

int size(int A) {
  return -Parent[root(A)];
}

bool connect(int A, int B) {
  A = root(A);
  B = root(B);
  if (A == B) {
    return false;
  }
  if (size(A) < size(B)) swap(A, B);
    Parent[A] += Parent[B];
    Parent[B] = A;
    return true;
  }
};


int main(){
  int n,m;
  cin >> n >> m;
  UnionFind uni(n);
  set<pair<int,int>> st;
  for (int i = 0; i < m; i++)
  {
    int a,b;
    cin >> a >> b;
    st.emplace(a,b);
  }

  for(auto p:st){
    uni.connect(p.first-1, p.second-1);
  }

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = max(ans,uni.size(i));
  }
  cout << ans << endl;
}