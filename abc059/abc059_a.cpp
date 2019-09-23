#include <bits/stdc++.h>
using namespace std;

int main(){
  string s1,s2,s3;
  cin >> s1 >> s2 >> s3;
  int diff = 'A' - 'a';
  printf("%c%c%c\n",s1[0]+diff,s2[0]+diff,s3[0]+diff);
}