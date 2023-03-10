#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 関数定義
int my_min(int x, int y) {
  if (x < y) {
    return x;
  }
  else {
    return y;
  }
}

// 返り値が無いのでvoidを指定
void hello(string text) {
  cout << "Hello, " << text << endl;
  return;
}

// 整数の入力を受け取って返す関数
// 引数なし
int input() {
  int x;
  cin >> x;
  return x;
}

// 引数の値に5を足して出力する関数
void add5(int &x) {
  x += 99;
  cout << x << endl;
  return;
}

// 0からnまでの和を求める関数sum
int sum(int n) {
  if (n == 0) {
    return 0;
  }
  return n + sum(n - 1);
}

// 1人のテストの点数を表す配列から合計点を計算して返す関数
// 引数 scores: scores.at(i)にi番目のテストの点数が入っている
// 返り値: 1人のテストの合計点
int sum(vector<int> scores) {
  int total_point = 0;
  for(int i= 0; i < scores.size(); i++) {
    total_point += scores.at(i);
  }
  return total_point;
}
 
// 3人の合計点からプレゼントの予算を計算して出力する関数
// 引数 sum_a: A君のテストの合計点
// 引数 sum_b: B君のテストの合計点
// 引数 sum_c: C君のテストの合計点
// 返り値: なし
void output(int sum_a, int sum_b, int sum_c) {
  cout << sum_a * sum_b * sum_c << endl;
}

// N個の入力を受け取って配列に入れて返す関数
// 引数 N: 入力を受け取る個数
// 返り値: 受け取ったN個の入力の配列
vector<int> input(int N) {
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  return vec;
}

int main() {
  int answer = my_min(10, 5);
  cout << answer << endl; // 5
  hello("Tom");
  hello("C++");

  int num = 10;
  add5(num); // numの値は引数xにコピーされる
 
  cout << num << endl; // numは10のまま

  cout << sum(5) << endl;




// 科目の数Nを受け取る
  int N;
  cin >> N;
 
  // それぞれのテストの点数を受け取る
  vector<int> A = input(N);
  vector<int> B = input(N);
  vector<int> C = input(N);
 
  // それぞれの合計点を計算
  int sum_A = sum(A);
  int sum_B = sum(B);
  int sum_C = sum(C);
 
  // プレゼントの予算を出力
  output(sum_A, sum_B, sum_C);
}