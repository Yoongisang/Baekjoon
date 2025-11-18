#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> p;
	
	for (int i = 0; i < N; i++)
	{
		int temp = 0;
		cin >> temp;
		p.push_back(temp);

	}

	sort(p.begin(), p.end()); 
    
	int sum = 0;
	int answer = 0;

	for (int i = 0; i < p.size(); i++)
	{
		sum += p[i];

		answer += sum;
	}

	cout << answer << "\n";

	return 0;
}
