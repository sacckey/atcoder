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

  vector<int> p(n+1);
  for (int i = 1; i <= n; i++)
  {
    cin >> p[i];
  }

  UnionFind uni(n+1);
  for (int i = 0; i < m; i++)
  {
    int x,y;
    cin >> x >> y;
    uni.connect(x,y);
  }

  int ans=0;
  for (int i = 1; i <= n; i++)
  {
    if(uni.root(i)==uni.root(p[i])) ans++;
  }

  cout << ans << endl;
  return 0;
}