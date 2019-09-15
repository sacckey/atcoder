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

  vector<pair<int,int>> vec;
  for (int i = 0; i < m; i++)
  {
    int a,b;
    cin >> a >> b;
    vec.emplace_back(a-1,b-1);
  }

  int ans = 0;
  for (int i = 0; i < m; i++)
  {
    UnionFind uni(n);
    for (int j = 0; j < m; j++) if(i!=j) uni.connect(vec[j].first,vec[j].second);
    
    set<int> roots;
    for (int k = 0; k < n; k++) roots.insert(uni.root(k));
    if(roots.size()>1) ans++;
  }
  cout << ans << endl;
}