#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string line;
	int N;
	int count = 0;
	while (getline(cin,line))
	{
		if (line.empty())
		{
			break;
		}
		
		stringstream ss(line);
		while (ss >> N)
		{
			if (N > 0)
			{
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}