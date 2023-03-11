#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  // // int型の2次元配列(3×4要素の)の宣言
  // vector<vector<int>> data(3, vector<int>(4));
  // // 入力 (2重ループを用いる)
  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     cin >> data.at(i).at(j);
  //   }
  // }
  // // 0の個数を数える
  // int count = 0;
  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     // 上からi番目、左からj番目の画素が0かを判定
  //     if (data.at(i).at(j) == 0) {
  //       count++;
  //     }
  //   }
  // }
  // cout << count << endl;

  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
 
  vector<vector<char>> data(N, vector<char>(N, '-'));

  for (int i = 0; i < M; i++) {
    data.at(A.at(i) - 1).at(B.at(i) -1) = 'o';
    data.at(B.at(i) - 1).at(A.at(i) -1) = 'x';
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << data.at(i).at(j);
      if(j == N - 1) {
        cout << endl;
      } else {
        cout << " ";
      }
    }
  }
  
}