#include <bits/stdc++.h>

using namespace std;

// struct MyPair {
//   int x;     // 1つ目のデータはint型であり、xという名前でアクセスできる
//   string y;  // 2つ目のデータはstring型であり、yという名前でアクセスできる
// };

struct MyPair {
  int x;
  string y;
  // コンストラクタ
  // MyPair() {
  //   cout << "constructor called" << endl;
  // }

  // // コンストラクタ1
  // MyPair() {
  //   cout << "初期化無し" << endl;
  // }
  // // コンストラクタ2
  // MyPair(int x_) {
  //   cout << "xのみ初期化" << endl;
  //   x = x_;
  // }
  // // コンストラクタ3
  // MyPair(int x_, string y_) {
  //   cout << "x, y両方初期化" << endl;
  //   x = x_;
  //   y = y_;
  // }

  // // コンストラクタ
  // MyPair() {
  //   cout << "normal constructor called" << endl;
  // }
  // // コピーコンストラクタ
  // MyPair(const MyPair &old) {
  //   cout << "copy constructor called" << endl;
  //   x = old.x + 1;
  //   y = old.y + " new";
  // }
  
  // 別のMyPair型のオブジェクトをとって、x, yにそれぞれ+したものを返す
  // +演算子をオーバーロード
  // MyPair operator+(const MyPair &other) {
  //   MyPair ret;
  //   ret.x = x + other.x;  // ここではint型の+演算子が呼ばれる
  //   ret.y = y + other.y;  // ここではstring型の+演算子が呼ばれる
  //   return ret;
  // }

  // 代入演算子をオーバーロード
  void operator=(const MyPair &other) {
    cout << "= operator called" << endl;
    x = other.x;
    y = other.y;
  }

  // メンバ関数
  void print() {
    // 直接x, yにアクセスできる
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
  }
};

struct NumString {
  int length;
  string s;
  // コンストラクタ
  NumString(int num) {
    cout << "constructor called" << endl;
    // 引数のnumを文字列化したものをsに代入し、sの文字数をlengthに代入する
    s = to_string(num);  // (STLの関数)
    length = s.size();
  }
};


int main(){
  // MyPair p = { 12345, "Hello" };
  // p.print();  // オブジェクト`p`の`print`を呼び出す
  // MyPair q = { 67890, "APG4b" };
  // q.print();  // オブジェクト`q`の`print`を呼び出す

  // MyPair p;
  // p.x = 123456;
  // p.y = "hello";
  // cout << "x = " << p.x << endl;
  // cout << "y = " << p.y << endl;
  // p.print();  // オブジェクト`p`の`print`を呼び出す

  // NumString num(12345);  // コンストラクタに 12345 が渡される
  // cout << "num.s = " << num.s << endl;
  // cout << "num.length = " << num.length << endl;

  // MyPair p;  // コンストラクタ1が呼ばれる
  // cout << "p.x = " << p.x << endl;
  // cout << "p.y = " << p.y << endl;
 
  // MyPair q(6789);  // コンストラクタ2が呼ばれる
  // cout << "q.x = " << q.x << endl;
  // cout << "q.y = " << q.y << endl;
 
  // MyPair r(11111, "good bye");  // コンストラクタ3が呼ばれる
  // cout << "r.x = " << r.x << endl;
  // cout << "r.y = " << r.y << endl;

  // MyPair p;  // ここでコンストラクタが呼ばれる
  // p.x = 12345;
  // p.y = "hello";
  // cout << "p.x = " << p.x << endl;
  // cout << "p.y = " << p.y << endl;
 
  // MyPair q(p);  // コピーコンストラクタが呼ばれる
  // cout << "q.x = " << q.x << endl;
  // cout << "q.y = " << q.y << endl;
 
  // MyPair r = q;  // コピーコンストラクタが呼ばれる
  // cout << "r.x = " << r.x << endl;
  // cout << "r.y = " << r.y << endl;


  // MyPair a = {123, "hello"};
  // MyPair b = {456, "world"};
 
  // // MyPair型の+演算子が呼ばれる
  // MyPair c = a + b;
 
  // cout << "c.x = " << c.x << endl;
  // cout << "c.y = " << c.y << endl;

  MyPair a = {123, "hello"};
 
  MyPair b;
  b = a;  // 代入演算子が呼ばれる
 
  cout << "b.x = " << b.x << endl;
  cout << "b.y = " << b.y << endl;
}