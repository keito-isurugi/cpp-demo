#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int f(int &x) {
  x = x * 2;  // 2. xを2倍
  return x;   // 3. xの値を返す
}

// a,b,cの最大値、最小値をそれぞれminimumの参照先、maximumの参照先に代入する
void min_and_max(int a, int b, int c, int &minimum, int &maximum) {
  minimum = min(a, min(b, c));  // 最小値をminimumの参照先に代入
  maximum = max(a, max(b, c));  // 最大値をmaximumの参照先に代入
}

// 配列の先頭100要素の値の合計を計算する
int sum100(vector<int> &a) {
  int result = 0;
  for (int i = 0; i < 100; i++) {
    result += a.at(i);
  }
  return result;
}

void saiten(vector<vector<int>> &a, int &correct_count, int &wrong_count) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      int seikai = (i + 1) * (j + 1);
      if(a.at(i).at(j) != seikai) {
        a.at(i).at(j) = seikai;
        wrong_count++;
      } else {
        correct_count++;
      }
    }
  }
}

int main() {
  // int a = 3;
  // int &b = a;  // bは変数aの参照
  // cout << "a: " << a << endl;  // aの値を出力
  // cout << "b: " << b << endl;  // bの参照先の値を出力(aの値である3が出力される)
  // b = 4;  // 参照先の値を変更(aが4になる)
  // cout << "a: " << a << endl;  // aの値を出力
  // cout << "b: " << b << endl;  // bの参照先の値を出力(aの値である4が出力される)
 
  // int a = 3;  // "呼び出す側の変数"
  // int b = f(a);  // 1. aの値をfに渡し、4. 結果をbに代入
  // cout << "a: " << a << endl;
  // cout << "b: " << b << endl;

  // 返り値を複数返したい場合
  // int minimum, maximum;
  // min_and_max(3, 1, 5, minimum, maximum);  // minimum, maximumを参照渡し
  // cout << "minimum: " <<  minimum << endl;  // 最小値
  // cout << "maximum: " <<  maximum << endl;  // 最大値

  // 無駄なコピーを減らす
  // vector<int> vec(10000000, 1);  // すべての要素が1の配列
  // // sum100 を500回呼び出す
  // for (int i = 0; i < 500; i++) {
  //   cout << sum100(vec) << endl;  // 配列のコピーが生じる
  // }

  // A君の回答を受け取る
  vector<vector<int>> A(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> A.at(i).at(j);
    }
  }
 
  int correct_count = 0; // ここに正しい値のマスの個数を入れる
  int wrong_count = 0;   // ここに誤った値のマスの個数を入れる
 
  // A, correct_count, wrong_countを参照渡し
  saiten(A, correct_count, wrong_count);
 
  // 正しく修正した表を出力
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << A.at(i).at(j);
      if (j < 8) cout << " ";
      else cout << endl;
    }
  }
  // 正しいマスの個数を出力
  cout << correct_count << endl;
  // 誤っているマスの個数を出力
  cout << wrong_count << endl;
}
  
  