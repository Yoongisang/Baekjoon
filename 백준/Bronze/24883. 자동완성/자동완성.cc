#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	char input;
	cin >> input;

	if (input == 'N' || input == 'n')
	{
		cout << "Naver D2" << endl;
	}
	else
	{
		cout << "Naver Whale" << endl;
	}
	return 0;
}