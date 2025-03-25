#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int price;
	int spec;
	int warboy;
	cin >> price >> spec >> warboy;

	cout << (spec / price) * 3 * warboy << endl;
	return 0;
}