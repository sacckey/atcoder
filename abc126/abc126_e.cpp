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
  int N, M; 
  cin >> N >> M;
  vector<int> X(M), Y(M), Z(M);
  for (int i = 0; i < M; ++i){
    cin >> X[i] >> Y[i] >> Z[i];
    --X[i], --Y[i];
  }
  UnionFind uf(N);
  for (int i = 0; i < M; ++i) uf.connect(X[i], Y[i]);
  set<int> se;
  for (int i = 0; i < N; ++i) se.insert(uf.root(i));
  cout << se.size() << endl;
}