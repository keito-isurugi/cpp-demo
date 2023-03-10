#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  string err_msg = "error";

  for(int i = 1; i <= N; i++) {
    string op;
    int Num;
    cin >> op >> Num;


    if (op == "+") {
      A += Num;
    } else if(op == "-") {
      A -= Num;
    } else if(op == "*") {
      A *= Num;
    } else if(op == "/") {
      if(Num != 0) {
        A /= Num;
      } else {
        cout << err_msg << endl;
        break;
      }
    } else {
        cout << err_msg << endl;
        break;
    }
    cout << i;
    cout << ":";
    cout << A << endl;


  }
  // string op;
  // string err_msg = "error";
  // cin >> A >> op >> B;


 
  
}