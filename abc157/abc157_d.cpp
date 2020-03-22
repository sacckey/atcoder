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
  int n,m,k;
  cin >> n >> m >> k;
  vector<int> vec(n);

  UnionFind uni(n);
  for (int i = 0; i < m; i++)
  {
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    uni.connect(a,b);
    vec[a]++;
    vec[b]++;
  }
  for (int i = 0; i < k; i++)
  {
    int c,d;
    cin >> c >> d;
    c--;
    d--;
    if(uni.root(c) == uni.root(d)){
      vec[c]++;
      vec[d]++;
    }
  }

  for (int i = 0; i < n; i++)
  {
    int ans = 0;
    cout << uni.size(i) - 1 - vec[i] << " ";
  }
  cout << endl;  
}