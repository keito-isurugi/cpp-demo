#include <bits/stdc++.h>

using namespace std;

string concat(string a, string b) {
  return a + b;
}

int main(){
  // pair<string, int> p("abc", 3);
  // cout << p.first << endl;  // abc
 
  // p.first = "hello";
  // cout << p.first << endl;  // hello
  // cout << p.second << endl; // 3
 
  // p = make_pair("*", 1);
 
  // string s;
  // int a;
  // tie(s, a) = p;
  // cout << s << endl;  // *
  // cout << a << endl;  // 1

  // tuple<int, string, bool> data(1, "hello", true);
  // get<2>(data) = false;
  // cout << get<1>(data) << endl;  // hello
 
  // data = make_tuple(2, "WORLD", true);
 
  // int a;
  // string s;
  // bool f;
  // tie(a, s, f) = data;
  // cout << a << " " << s << " " << f << endl;  // 2 WORLD 1

  // pair<int, int> a(3, 1);
  // pair<int, int> b(2, 10);
  // // 3 > 2 なので a < b は false
  // if (a < b) {
  //   cout << "a < b" << endl;
  // }
  // else {
  //   cout << "a >= b" << endl;
  // }
 
  // pair<int, int> c(5, 1);
  // pair<int, int> d(5, 10);
  // // 5 == 5 であり 1 < 10 なので c < d は true
  // if (c < d) {
  //   cout << "c < d" << endl;
  // }
  // else {
  //   cout << "c >= d" << endl;
  // }

  // vector<tuple<int, int, int>> a;
  // a.push_back(make_tuple(3, 1, 1));
  // a.push_back(make_tuple(1, 2, 100));
  // a.push_back(make_tuple(3, 5, 1));
  // a.push_back(make_tuple(1, 2, 3));
  // sort(a.begin(), a.end());
 
  // for (tuple<int, int, int> t : a) {
  //   int x, y, z;
  //   tie(x, y, z) = t;
  //   cout << x << " " << y << " " << z << endl;
  // }

  // string a = "Hello,";
  // string b = "World";
  // auto ab = concat(a, b);  // string型
  // cout << ab << endl;
 
  // vector<int> c = {1, 2, 3};
  // auto d = c;  // vector<int>型
 
  // for (auto elem : d) {
  //   // elemはint型
  //   cout << elem << endl;
  // }

  // pair<int, int> p(3, 5);
  // int right;
  // tie(ignore, right) = p;  // 2番目の値だけ取り出す
  // cout << right << endl; // 5
 
  // tuple<int, string, bool> tpl(2, "hello", false);
  // int x;
  // string s;
  // tie(x, s, ignore) = tpl;  // 1番目の値、2番目の値だけ取り出す
  // cout << x << " " << s << endl; // 2 hello


  // using pii = pair<int, int>;
  // // これ以降 pii という型名はpair<int, int> と同じ意味で使える
 
  // pii p;
  // p = make_pair(1, 2);
  // cout << "(" << p.first << ", " << p.second << ")" << endl;
  // p = pii(3, 4);  // 別のpairを作って代入
  // cout << "(" << p.first << ", " << p.second << ")" << endl;

  // using vi = vector<int>; // intの1次元の型に vi という別名をつける
  // using vvi = vector<vi>; // intの2次元の型に vvi という別名をつける

  // int N = 10, M = 20;
  // vvi data(N, vi(M));  // N * M の2次元配列

  int N;
  cin >> N;
  
  vector<pair<int, int>> a;
  

  for(int i = 0; i < N; i++) {
    int int_a;
    cin >> int_a;
    int int_b;
    cin >> int_b;
    a.push_back(make_pair(int_b, int_a));
  }
  
  sort(a.begin(), a.end());
  for (pair<int, int> t : a) {
    int x, y;
    tie(x, y) = t;
    cout << y << " " << x << endl;
  }

}



  