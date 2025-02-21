#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    char name[110];  // 최대 100글자 + null 문자 고려

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", &name, 101);
        // 이름에 'S' 문자가 포함되어 있는지 확인
        if (strchr(name, 'S') != NULL) {
            printf("%s\n", name);
            break;  // 답은 유일하므로 바로 종료
        }
    }

    return 0;
}