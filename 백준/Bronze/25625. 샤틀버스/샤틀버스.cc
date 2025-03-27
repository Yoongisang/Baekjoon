#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	if (y < x)
	{
		cout << x + y << endl;
	}
	else if (y > x)
	{
		cout << y - x << endl;
	}
	return 0;
}