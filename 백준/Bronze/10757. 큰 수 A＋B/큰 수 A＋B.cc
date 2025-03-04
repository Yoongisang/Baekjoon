#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    
    // 두 문자열의 길이를 맞추기 위해 짧은 쪽 앞에 '0'을 채워줍니다.
    int lenA = A.size(), lenB = B.size();
    if(lenA < lenB) {
        A.insert(0, lenB - lenA, '0');
    } else if(lenB < lenA) {
        B.insert(0, lenA - lenB, '0');
    }
    
    int carry = 0;
    string result = "";
    
    // 뒤에서부터 한 자리씩 더합니다.
    for (int i = A.size() - 1; i >= 0; i--) {
        int digitA = A[i] - '0';
        int digitB = B[i] - '0';
        int sum = digitA + digitB + carry;
        carry = sum / 10;
        result.push_back((sum % 10) + '0');
    }
    
    // 마지막 자리에서 올림이 남았다면 추가
    if(carry) {
        result.push_back(carry + '0');
    }
    
    // 현재 result는 뒤집힌 상태이므로 다시 뒤집어 줍니다.
    reverse(result.begin(), result.end());
    
    cout << result << endl;
    return 0;
}
