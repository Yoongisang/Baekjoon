#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	int start1, end1;
	int start2, end2;
	int start3, end3;

	cin >> A >> B >> C;
	cin >> start1 >> end1;
	cin >> start2 >> end2;
	cin >> start3 >> end3;

	int time[101] = { 0 };

	for (int t = start1; t < end1; t++)
	{
		time[t]++;
	}
	for (int t = start2; t < end2; t++)
	{
		time[t]++;
	}
	for (int t = start3; t < end3; t++)
	{
		time[t]++;
	}

	int sum = 0;
	for (int t = 1; t <= 100; t++)
	{
		if (time[t] == 1)
		{
			sum += A;
		}
		else if (time[t] == 2)
		{
			sum += B * 2;
		}
		else if (time[t] == 3)
		{
			sum += C * 3;
		}
	}

	cout << sum << endl;
	return 0;
}