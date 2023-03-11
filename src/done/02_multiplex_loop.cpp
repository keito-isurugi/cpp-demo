#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  // vector<int> A(3), B(3);
  // for (int i = 0; i < 3; i++) {
  //   cin >> A.at(i);
  // }
  // for (int i = 0; i < 3; i++) {
  //   cin >> B.at(i);
  // }
 
  // // 答えを保持する変数
  // bool answer = false;
 
  // // ここにプログラムを追記
  // for(int i = 0; i < 3; i++){
  //   for(int j = 0; j < 3; j++){
  //     if(A.at(i) == B.at(j)) answer = true;
  //   }
  // }
 
  // if (answer) {
  //   cout << "YES" << endl;
  // }
  // else {
  //   cout << "NO" << endl;
  // }

  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  int count = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(S == A.at(i) + P.at(j)) count++;
    }
  }
  cout << count << endl;

}