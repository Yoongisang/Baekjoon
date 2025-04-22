#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용
#include <algorithm>    // min 함수 사용
#include <stack>

using namespace std;

int main() 
{
    int k;
    cin >> k;
    int num;
    int sum = 0;
    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        cin >> num;
        if (num == 0)
        {
            s.pop();
        }
        else
        {
            s.push(num);
        }
    
    }
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        sum += s.top();
        s.pop();
    }
    cout << sum << endl;
   
    return 0; 
}
