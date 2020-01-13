#include <bits/stdc++.h>
using namespace std;

int main(){
  int dx[4] = { 1, 0, -1, 0 };
  int dy[4] = { 0, 1, 0, -1 };
  int height, width;
  cin >> height >> width;

  vector<string> field(height);
  for (int h = 0; h < height; ++h) cin >> field[h];

  int sx, sy, gx, gy;
  int ans = 0;
  for (int h = 0; h < height; ++h) {
    for (int w = 0; w < width; ++w) {
      if (field[h][w] == '.') {
        sx = h;
        sy = w;
      }
      else{
        continue;
      }
      vector<vector<int> > dist(height, vector<int>(width, -1)); 
      dist[sx][sy] = 0; // スタートを 0 に
      int dis = 0;

      queue<pair<int, int> > que; 
      que.push(make_pair(sx, sy)); // スタートを push
      while (!que.empty()) {
        pair<int, int> current_pos = que.front(); // キューの先頭を見る (C++ ではこれをしても pop しない)
        int x = current_pos.first;
        int y = current_pos.second;
        que.pop(); // キューから pop を忘れずに

        for (int direction = 0; direction < 4; ++direction) {
          int next_x = x + dx[direction];
          int next_y = y + dy[direction];
          if (next_x < 0 || next_x >= height || next_y < 0 || next_y >= width) continue; // 場外アウトならダメ
          if (field[next_x][next_y] == '#') continue; // 壁はダメ

          // まだ見ていない頂点なら push
          if (dist[next_x][next_y] == -1) {
              que.push(make_pair(next_x, next_y));
              dist[next_x][next_y] = dist[x][y] + 1; // (next_x, next_y) の距離も更新
              dis = max(dis,dist[next_x][next_y]);
          }
        }
      }
      ans = max(ans,dis);
    }
  }
  cout << ans << endl;
}