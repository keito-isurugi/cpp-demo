#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  // int N;
  // cin >> N;
  // int sum = 0;
  // for (int i = 1; i <= N; i++) {
  //   sum += i;
  // }
  // cout << sum << endl;

  int N;
  cin >> N;
  int sum = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      sum += i * j;
    }
  }
  cout << sum << endl;
}

  

  