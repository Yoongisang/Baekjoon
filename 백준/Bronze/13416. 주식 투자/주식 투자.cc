#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>

using namespace std;

int main() 
{
    int n;
    int day;

	cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> day;

        vector<int> A(day);
        vector<int> B(day);
        vector<int> C(day);
     
        int MAX = 0;
        for (int j = 0; j < day; j++)
        {
            cin >> A[j];
			cin >> B[j];
			cin >> C[j];
            int temp = max({ A.at(j), B.at(j), C.at(j) });
            if (temp > 0)
            {
                MAX += temp;
            }
            
        }
		cout << MAX << endl;


    }

    
   
    return 0; 
}
