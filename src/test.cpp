#include <bits/stdc++.h>

using namespace std;

// void print_int(int x) {
//   cout << "x = " << x << endl;
// }

int main(){
  pair<string, int> p("abc", 3);
  cout << p.first << endl;  // abc
 
  p.first = "hello";
  cout << p.first << endl;  // hello
  cout << p.second << endl; // 3
 
  p = make_pair("*", 1);
 
  string s;
  int a;
  tie(s, a) = p;
  cout << s << endl;  // *
  cout << a << endl;  // 1
}

  

  