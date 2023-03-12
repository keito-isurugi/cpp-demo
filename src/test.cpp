#include <bits/stdc++.h>

using namespace std;

int main(){
  int64_t a = 20000000000;
  int64_t b = a * 2;
  cout << b << endl;
 
  int64_t c = (a * 10 + 100) / 100;
  cout << c << endl;

  cout << 2000000000 * 2 << endl;     // int * int         -> int
  cout << 2000000000LL * 2LL << endl; // int64_t * int64_t -> int64_t
  cout << 2000000000LL * 2 << endl;   // int64_t * int     -> int64_t

  cout << 3.14159265358979 << endl;
 
  // 小数点以下10桁まで
  cout << fixed << setprecision(10);
 
  cout << 3.14159265358979 << endl;
}

  

  