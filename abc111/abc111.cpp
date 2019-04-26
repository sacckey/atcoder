#include <bits/stdc++.h>
using namespace std;

void solveA(){
  string n;
  cin >> n;

  for(int i=0;i<3;i++){
    if(n[i]=='1'){
      n[i]='9';
    }
    else {
      n[i]='1';
    }
  }

    cout << n << endl;
}
void solveB(){
  string n;
  cin >> n;

  if(n[0]<n[1] || (n[0]==n[1]&&n[1]<n[2])){
    n[0]++;
  }
    n[1]=n[0];
    n[2]=n[0];
    cout << n << endl;
}

void solveBB(){
  int n;
  cin >> n;

  if(n%111==0) n--;
  cout << (n/111+1)*111 << endl;
}

void solveC(){
  int n;
  cin >> n;

  vector<int> ocnt(100000);
  vector<int> ecnt(100000);

  int omode=0,emode=0;
  int omax_cnt=0,emax_cnt=0;
  for(int i=0;i<n;i++){
    int v;
    cin >> v;
    if(i%2==0){
      ecnt[v]++;
      if(ecnt[v]>emax_cnt){
	emax_cnt=ecnt[v];
	emode=v;
      }
    }
    else {
      ocnt[v]++;
      if(ocnt[v]>omax_cnt){
	omax_cnt=ocnt[v];
	omode=v;
      }
    }
  }
  
  sort(ocnt.begin(),ocnt.end(),greater<int>());
  sort(ecnt.begin(),ecnt.end(),greater<int>());

  if(emode==omode){
    cout << min(n-ocnt[0]-ecnt[1],n-ocnt[1]-ecnt[0]) << endl;
  }
  else{
    cout << n-ocnt[0]-ecnt[0] << endl;
  }
}
void solveD(){

}

int main(){
  solveC();
}
