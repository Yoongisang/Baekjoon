#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>

using namespace std;

int main() 
{
    string s;
	
	while (true)
	{	
		stack<char> st;
		bool isBalanced = true;
		getline(cin, s); 
		if (s[0] =='.' && s.length() == 1)
		{
			break;
		}

		for (int i = 0; i < s.length(); i++)
		{
			
			if (s[i] == '(' || s[i] == '[')
			{
				st.push(s[i]);
			}
			else if (s[i] == ')')
			{
				if (st.empty() || st.top() != '(')
				{
					isBalanced = false;
					break;
				}
					st.pop();
			}
			else if (s[i] == ']')
			{
				if (st.empty() || st.top() != '[')
				{
					isBalanced = false;
					break;
				}
					st.pop();
			}
			
		}
		if (isBalanced && st.empty())
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
    return 0; 
}
