#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int p;
  cin >> p;
 
  // パターン2
  if (p == 2) {
    int price;
    string text;
    cin >> text >> price;
    cout << text << "!" << endl;
  }
 
  int price, N;
  cin >> N;
   cout << price * N << endl;
}