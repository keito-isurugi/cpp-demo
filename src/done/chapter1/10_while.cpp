#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  // 入力
  // 3
  // 1 10 100

  // int N;
  // cin >> N;
  // int sum = 0; // 合計点を表す変数
  // int x;       // 入力を受け取る変数
  // int i = 0;   // カウンタ変数
 
  // while (i < N) {
  //   cin >> x;
  //   sum += x;
  //   i++;
  // }
 
  // cout << sum << endl;


  int A, B;
  cin >> A >> B;

  int a = 1;
  cout << "A:";
  while (a <= A) {
    cout << "]";
    a++;
  }
  cout << endl;

  int b = 1;
  cout << "B:";
  while (b <= B) {
    cout << "]";
    b++;
  }
  cout << endl;
}