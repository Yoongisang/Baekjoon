#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	while (N > 0)
	{
		string c;
		cin >> c;
		stack<char> s;
		bool isValid = true;

		for (int i = 0; i < c.length(); i++)
		{
			if (c[i] == '(')
			{
				s.push(c[i]);
			}
			else if (c[i] == ')')
			{
				if (s.empty())
				{
					isValid = false;
					break;
				}
				else
				{
					s.pop();
				}
			}
		}
		if (!s.empty())
		{
			isValid = false;
		}

		if (isValid == true)
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
		N--;
	}
	return 0;
}