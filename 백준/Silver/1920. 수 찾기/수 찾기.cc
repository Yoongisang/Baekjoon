#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	int M;
	cin >> N;
	int* A = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	sort(A, A + N);

	cin >> M;
	int* B = new int[M];

	for (int i = 0; i < M; i++)
	{
		cin >> B[i];
	}

	for (int i = 0; i < M; i++)
	{
		if (binary_search(A, A + N, B[i]))
		{
			cout << "1" << "\n";
		}
		else
		{
			cout << "0" << "\n";
		}
	}



	delete[] A;
	delete[] B;

	return 0;
}