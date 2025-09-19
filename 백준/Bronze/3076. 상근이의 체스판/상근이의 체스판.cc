#include <iostream>     // 표준 입출력 사용
#include <vector>       // vector 컨테이너 사용
#include <string>       // string 클래스 사용

using namespace std;

int main() 
{
    // 입력 변수 선언
    int R, C, A, B;
    cin >> R >> C >> A >> B;
    
    // 체스판 생성 - 논리적 좌표를 물리적 좌표로 확대
    for (int logical_row = 0; logical_row < R; logical_row++) 
    {
        // 각 논리적 행을 A번 반복 출력
        for (int row_repeat = 0; row_repeat < A; row_repeat++) 
        {
            for (int logical_col = 0; logical_col < C; logical_col++) 
            {
                // 체스판 패턴 결정 - (행+열)이 짝수면 검정, 홀수면 흰색
                char pattern;
                if ((logical_row + logical_col) % 2 == 0) 
                {
                    pattern = 'X';  // 검정 칸
                } 
                else 
                {
                    pattern = '.';  // 흰 칸
                }
                
                // 각 논리적 열을 B번 반복 출력
                for (int col_repeat = 0; col_repeat < B; col_repeat++) 
                {
                    cout << pattern;
                }
            }
            cout << '\n';  // 행 끝에서 개행
        }
    }
    
    return 0;
}