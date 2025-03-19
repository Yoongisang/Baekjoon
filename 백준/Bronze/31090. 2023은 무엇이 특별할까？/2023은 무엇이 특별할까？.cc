#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	int* N = new int[T];
	for (int i = 0; i < T; i++)
	{
		N[i] = 0;
	}

	for (int i = 0; i < T; i++)
	{
		cin >> N[i];
	}

	for (int i = 0; i < T; i++)
	{
		if ((N[i] + 1) % (N[i] % 100) == 0)
		{
			cout << "Good" << endl;
		}
		else
		{
			cout << "Bye" << endl;
		}
	}

	delete[] N;
	return 0;
}