#include <bits/stdc++.h>

using namespace std;

int main(){
  // map<string, int> score;  // 名前→成績
  // score["Alice"] = 100;
  // score["Bob"] = 89;
  // score["Charlie"] = 95;
 
  // cout << score.at("Alice") << endl;   // Aliceの成績
  // cout << score.at("Bob") << endl;     // Bobの成績
  // cout << score.at("Charlie") << endl; // Daveの成績

  // for(auto x : score) {
  //   cout << x.first << " " << x.second << endl;
  // }

  // queue<int> q;
  // q.push(10);
  // q.push(3);
  // q.push(6);
  // q.push(1);
 
  // // 空でない間繰り返す
  // while (!q.empty()) {
  //   cout << q.front() << endl;  // 先頭の値を出力
  //   q.pop();  // 先頭の値を削除
  // }

  // priority_queue<int> pq;
  // pq.push(10);
  // pq.push(3);
  // pq.push(6);
  // pq.push(1);
 
  // // 空でない間繰り返す
  // while (!pq.empty()) {
  //   cout << pq.top() << endl;  // 最大の値を出力
  //   pq.pop();  // 最大の値を削除
  // }

  // set<int> S;
 
  // S.insert(3);
  // S.insert(7);
  // S.insert(8);
  // S.insert(10);
  // // 既に3は含まれているのでこの操作は無視される
  // S.insert(3);
 
  // // 集合の要素数を出力
  // cout << "size: " << S.size() << endl;
  // // 7が含まれるか判定
  // if (S.count(7)) {
  //   cout << "found 7" << endl;
  // }
  // // 5が含まれるか判定
  // if (S.count(5)) {
  //   cout << "found 5" << endl;
  // } else {
  //   cout << "5 not found" << endl;
  // }

  // stack<int> s;
  // s.push(10);
  // s.push(1);
  // s.push(3);
 
  // cout << s.top() << endl;  // 3 (最後に追加した値)
  // s.pop();
  // cout << s.top() << endl;  // 1 (その前に追加した値)
  // s.pop();
  // cout << s.top() << endl;  // 1 (その前に追加した値)


  // deque<int> d;
  // d.push_back(10);
  // d.push_back(1);
  // d.push_back(3);
 
  // // この時点で d の内容は { 10, 1, 3 } となっている
  // cout << d.front() << endl; // 10 (先頭の要素)
  // d.pop_front();  // 先頭を削除
 
  // // この時点で d の内容は { 1, 3 } となっている 
  // cout << d.back() << endl;  // 3 (末尾の要素)
  // d.pop_back();  // 末尾を削除
 
  // // この時点で d の内容は { 1 } となっている

  // d.push_front(5);
  // d.push_back(2);
 
  // // この時点で d の内容は { 5, 1, 2 } となっている
  // cout << d.at(1) << endl; // 1

  int N;
  cin >> N;

  vector<int> A(N);
  for(int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  map<int, int> cnt; 
  for(int x : A) {
    if (cnt.count(x)) {
      cnt.at(x)++;
    }
    else {
      cnt[x] = 1;
    }
  }

  int max_cout = 0;
  int ans = -1;
  for (int x : A) {
    if(max_cout < cnt.at(x)) {
      max_cout = cnt.at(x);
      ans = x;
    }
  }

  cout << ans << " " << max_cout << endl;

}