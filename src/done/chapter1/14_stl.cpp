#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  // int a = 10, b = 5;
 
    // int answer;
    // if (a < b) {
    //     answer = a;
    // }
    // else {
    //     answer = b;
    // }
    // cout << min(a, b) << endl;

    // vector<int> vec = {1, 5, 3};
    // reverse(vec.begin(), vec.end()); // {3, 5, 1}
 
    // for (int i = 0; i < vec.size(); i++) {
    //     cout << vec.at(i) << endl;
    // }

    int A, B, C;
    cin >> A >> B >> C;
    cout << max(max(A, B), C) - min(min(A, B), C) << endl;
}