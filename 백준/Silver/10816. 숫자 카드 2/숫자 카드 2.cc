#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main()
{
	int N, M;
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
		int count = upper_bound(A, A + N, B[i]) - lower_bound(A, A + N, B[i]);
		cout << count << " ";
	}

	delete[] A;
	delete[] B;

	return 0;
}