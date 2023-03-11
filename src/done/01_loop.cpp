#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  // int a;
  // cin >> a;
  // vector<int> data(5);
  // for (int i = 0; i < 5; i++) {
  //   cin >> data.at(i);
  // }

  // int count = 0;
  // for(int i = 0; i < data.size(); i++) {
  //   if(data.at(i) == a) count++;
  // }
  // cout << count << endl;

  // vector<int> a = {1, 3, 2, 5};
  // for (int x : a) {
  //   cout << x << endl;
  // }

  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  bool ans = false;
  for(int i = 0; i < 4; i++) {
    if(data.at(i) == data.at(i + 1)) ans = true;
  }

  if(ans) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}