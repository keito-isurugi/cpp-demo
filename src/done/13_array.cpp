#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  // 文字列
  // string str; // 文字列変数を宣言
  // str = "abcd"; // 'a', 'b', 'c', 'd' という文字(char)の列を代入
  // cout << str.at(0) << endl; // 1つ目である'a'を出力
  // cout << str.size() << endl; // 文字列の長さである4を出力
 
  // 配列
  // vector<int> vec; // int型の配列変数vecを宣言
  // vec = { 25, 100, 64 };
  // cout << vec[0] << endl; // 1つめである25を出力
  // cout << vec.size() << endl; // 配列の長さである3を出力

  // 3個の入力を受け取れるように 3要素の配列 {0, 0, 0} で初期化
  // vector<int> vec(3);
  // // atを使って1つずつ入力
  // cin >> vec.at(0) >> vec.at(1) >> vec.at(2);
  // // 和を出力
  // cout << vec.at(0) + vec.at(1) + vec.at(2) << endl;

  // int N;
  // cin >> N;
 
  // vector<int> math(N); // N個の数学の点数データ
  // vector<int> english(N); // N個の英語の点数データ
 
  // // 数学の点数データを受け取る
  // for (int i = 0; i < N; i++) {
  //   cin >> math.at(i);
  // }
 
  // // 英語の点数データを受け取る
  // for (int i = 0; i < N; i++) {
  //   cin >> english.at(i);
  // }
 
  // // 合計点を出力
  // for (int i = 0; i < N; i++) {
  //   cout << math.at(i) + english.at(i) << endl;
  // }

  // vector<int> vec = { 1, 2, 3 };
 
  // vec.push_back(10); // 末尾に10を追加
  // // vecの全要素を出力
  // for (int i = 0; i < vec.size(); i++) {
  //   cout << vec.at(i) << endl;
  // }

  // vec.pop_back(); // 末尾の要素を削除
  // // vecの全要素を出力
  // for (int i = 0; i < vec.size(); i++) {
  //   cout << vec.at(i) << endl;
  // }

  int N;
  cin >> N;
  int point;
  int total_point = 0;
  int avg_point;
  vector<int> vec;

  for(int i = 0; i < N; i++) {  
    cin >> point;
    vec.push_back(point);
    total_point += point;
    avg_point = total_point / N;
  }
  
  for(int i = 0; i < vec.size(); i++) {  
    cout << abs(avg_point - vec.at(i)) << endl;
  }
  
}