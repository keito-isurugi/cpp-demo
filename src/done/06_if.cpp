#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int A, B;
  string op;
  string err_msg = "error";
  cin >> A >> op >> B;
 
  if (op == "+") {
    cout << A + B << endl;
  } else if(op == "-") {
    cout << A - B << endl;
  } else if(op == "*") {
    cout << A * B << endl;
  } else if(op == "/") {
    if(B != 0) {
      cout << A / B << endl;
    } else {
      cout << err_msg << endl;
    }
  } else {
      cout << err_msg << endl;
  }
}