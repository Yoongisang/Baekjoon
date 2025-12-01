// 실버2 1541번 잃어버린 괄호(그리디)
#include <iostream>
#include <sstream>
#include <string> 

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string S;
	cin >> S;
	stringstream ss(S);
	string group;

	int result = 0;
	bool firstGroup = true;

	// '-'를 기준으로 분리
	while (getline(ss, group, '-'))
	{
		// 각 그룹 내의 '+' 숫자들을 합산
		stringstream gs(group);
		string num;
		int groupSum = 0;

		while (getline(gs, num, '+'))
		{
			groupSum += stoi(num);
		}

		if (firstGroup)
		{
			result += groupSum;
			firstGroup = false;
		}
		else
		{
			result -= groupSum;
		}
	}

	cout << result << '\n';


	return 0;
}
