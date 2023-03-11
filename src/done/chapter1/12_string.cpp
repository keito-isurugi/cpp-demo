#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  // string str1, str2;
  // cin >> str1;
  // str2 = ", world!";
  // cout << str1 << str2 << endl; 

  // string str = "Hello";
  // cout << str.size() << endl;
  // cout << str.at(0) << endl; // h
  // cout << str.at(4) << endl; // o

  // char c = 'a';
  // cout << c << endl; // a

  // string str;
  // cin >> str;
 
  // int count = 0;
  // for (int i = 0; i < str.size(); i++) {
  //   if (str.at(i) == 'O') {
  //     count++;
  //   }
  // }
 
  // cout << count << endl;

  // string s, t;
  // getline(cin, s); // 変数sで入力を一行受け取る
  // getline(cin, t); // 変数tで入力を一行受け取る
 
  // cout << "一行目 " << s << endl;
  // cout << "二行目 " << t << endl;

  string S;
  cin >> S;

  int count = 1;
  for (int i = 0; i < S.size(); i++) {
    if(S.at(i) == '+') {
      count++;
    } else if(S.at(i) == '-') {
      count--;
    }
  }
  cout << count << endl;
}