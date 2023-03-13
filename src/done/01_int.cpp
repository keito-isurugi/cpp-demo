#include <bits/stdc++.h>

using namespace std;

// void print_int(int x) {
//   cout << "x = " << x << endl;
// }

int main(){
  // int64_t a = 20000000000;
  // int64_t b = a * 2;
  // cout << b << endl;
 
  // int64_t c = (a * 10 + 100) / 100;
  // cout << c << endl;

  // // cout << 2000000000 * 2 << endl;     // int * int         -> int
  // cout << 2000000000LL * 2LL << endl; // int64_t * int64_t -> int64_t
  // cout << 2000000000LL * 2 << endl;   // int64_t * int     -> int64_t

  // cout << 3.14159265358979 << endl;
  // // 小数点以下10桁まで
  // cout << fixed << setprecision(10);
  // cout << 3.14159265358979 << endl;

  // 小数点以下5桁まで
  // cout << fixed << setprecision(5);
  // int a = 5;
  // cout << (double)a << endl; // int型の値をdouble型に変換
  // double b = 3.141592;
  // cout << (int)b << endl; // double型の値をint型に変換

  // double a = 1.2345;
  // int b = 1;
  // // aがdouble型に変換されてからbとの足し算が行われる
  // // cout << a + (double)b << endl; と同じ結果
  // cout << a + b << endl;
 
  // int c = 2000000000;
  // int64_t d = 100;
  // // 初めにcがint64_t型へ変換されてからdとの掛け算が行われる
  // // cout << (int64_t)c * d << endl; と同じ結果
  // cout << c * d << endl;
 
  // double e = 3.141592;
  // int f = e;  // ここでdouble型からint型への変換が起こる(小数点以下が切り捨てられて3になる)
  // cout << f << endl;
  // // int型を引数に取る関数にdouble型を渡す
  // print_int(e);  // int型に変換されてから関数が実行される

  // double x = 1000000000;
  // double y = 0.000000001;
  // // 1000000000.000000001 を表現するには19桁分必要 → 扱えない
  // double z = x + y;  // yの分が消えてしまう
  // cout << fixed << setprecision(16);
  // cout << "x: " << x << endl;
  // cout << "y: " << y << endl;
  // cout << "z: " << z << endl;

  // int x = 12345;
  // double pi = 3.14159265358979;
  // printf("x = %d, pi = %lf\n", x, pi);
  // string s = "hello";
  // // フォーマット指定子 %s を用い s.c_str() を渡す
  // printf("%s\n", s.c_str());

  // double pi = 3.14159265358979;
  // // %.桁数f とすると小数点以下「桁数」だけ出力される
  // printf("%.20lf\n", pi);

  // int x = 1;
  // int y = 99;
  // int z = 123;
  // // %0桁数d とすると表示桁数が「桁数」に満たない場合に0埋めされる
  // printf("%03d, %03d, %03d\n", x, y, z);

  // int x;
  // double pi;
  // // scanfによる入力
  // scanf("x = %d, pi = %lf", &x, &pi);
  // printf("x = %d, pi = %lf\n", x, pi);

  // int number = 100;
  // string s = to_string(number);
  // cout << s + "yen" << endl;

  // string s = "100";
  // int n = stoi(s);
  // cout << n << endl;

  vector<int> data(0);  // サイズ0
  cout << data.size() - 1 << endl;  // -1ではない
 
  // 配列のサイズ-1回だけループしたい
  for (int i = 0; i < (int) data.size() - 1; i++) {
    cout << i << endl;
  }
}

  

  