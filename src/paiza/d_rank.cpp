#include <bits/stdc++.h>
using namespace std;

int main() {
	// D212:繋げた長さ
  string str;
	getline(cin, str);
	int num = stoi(str);
	cout << num * 10 << endl;
	return 0;

	// D194:カロリーの計算
  string str;
	getline(cin, str);
	int num = stoi(str);
	cout << num * 10 << endl;
	return 0;

	// D182:燃費の計算
	int n, m;
	cin >> n;
	cin >> m;
	cout << n / m << endl;
	return 0;

	// D029:サイコロの裏面
	int n;
	cin >> n;
	cout << 7 - n << endl;
	return 0;

	// D028:数字の桁数
	string str;
	getline(cin, str);
	cout << str.length() << endl;
	return 0;

	// D047:メダリストの表示
	string str1, str2, str3;
	cin >> str1;
	cin >> str2;
	cin >> str3;
	cout << "Gold " + str1 << endl;
	cout << "Silver " + str2 << endl;
	cout << "Bronze " + str3 << endl;
	return 0;

	// D114:税込の価格
	int n, m;
	cin >> n;
	cin >> m;
	double rate = n / 100.0;
	int tax = m * rate;
	cout << m + tax << endl;
	return 0;

	// D078:入学試験
	int total_point = 0;
	for(int i = 0; i < 7; i++) {
		int point;
		cin >> point;
		total_point += point;
	}
	int avg_point = total_point / 7;

	int my_point;
	cin >> my_point;
	if(avg_point >= my_point) {
		cout << "pass" << endl;
	} else {
		cout << "failure" << endl;
	}

	// D139:少ない方の勝ち
	int n;
	cin >> n;

	int g_count = 0;
	int p_count = 0;
	string te;
	for(int i = 0; i < n; i++) {
		cin >> te;
		if(te == "G") g_count++;
		if(te == "P") p_count++;
	}

	if(g_count > p_count) cout << "P" << endl;
	if(p_count > g_count) cout << "G" << endl;
	if(p_count == g_count) cout << "Draw" << endl;

	// あと一問

}