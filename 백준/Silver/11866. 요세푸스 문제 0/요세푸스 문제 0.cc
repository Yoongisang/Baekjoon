#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>
#include <queue>

using namespace std;

int main() 
{
    int n = 0;
	int k = 0;
    cin >> n >> k;

    queue<int> qori;
	queue<int> qnew;
    for (int i = 0; i < n; i++)
    {
        qori.push(i + 1);
    }
    
	cout << "<";
    while (!qori.empty())
    {
        for (int i = 0; i < k - 1; i++)
        {
            qori.push(qori.front());
            qori.pop();
        }
		qnew.push(qori.front());
		qori.pop();
    }
    while (!qnew.empty())
    {
        if (qnew.size() != 1)
        {
            cout << qnew.front() << ", ";
            qnew.pop();
        }
        else
        {
			cout << qnew.front() << ">";
			qnew.pop();
        }
    }
    
    return 0; 
}
