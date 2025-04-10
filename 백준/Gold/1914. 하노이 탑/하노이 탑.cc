#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Hanoi(int num, int from, int to, int by);

// 문자열로 표현된 10진수 수에 2를 곱한다.
string mul2(const string& s) {
	string res;
	int carry = 0;
	// 뒤에서부터 각 자리 곱하고 올림 처리
	for (int i = s.size() - 1; i >= 0; --i) {
		int d = (s[i] - '0') * 2 + carry;
		res.push_back(char('0' + (d % 10)));
		carry = d / 10;
	}
	if (carry) res.push_back(char('0' + carry));
	reverse(res.begin(), res.end());
	return res;
}

// 문자열로 표현된 10진수 수에서 1을 뺀다.
string sub1(string s) {
	int i = s.size() - 1;
	while (i >= 0) {
		if (s[i] > '0') {
			s[i]--;
			break;
		}
		s[i] = '9';
		--i;
	}
	// 맨 앞이 '0'으로 남으면 지워준다 (예: "1000" → "0999" → "999")
	if (s.size() > 1 && s[0] == '0')
		s.erase(s.begin());
	return s;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int num;
	cin >> num;
	string K = "1";
	for (int i = 0; i < num; i++)
	{
		K = mul2(K);
	}

	K = sub1(K);

	cout << K << "\n";

	if (num <= 20)
	{
		Hanoi(num, 1, 3, 2);
	}
	

	return 0;
}

void Hanoi(int num, int from, int to, int by)
{
	if (num == 1)
	{
		cout << from << " " << to << "\n";
		return;
	}
	else
	{
		
		Hanoi(num - 1, from, by, to);
		cout << from << " " << to << "\n";
		Hanoi(num - 1, by, to, from);
	}
}

