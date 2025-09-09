#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>
#include <queue>

using namespace std;

int main() 
{
    int bread = 0;
	int paeti = 0;
	int burger = 0;
	cin >> bread >> paeti;

	burger = min(bread / 2, paeti);
	cout << burger << "\n";
    return 0; 
}
