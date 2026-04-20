#include <stdio.h>

int main(void) 
{
    int length;
    scanf("%d", &length);     // 문자 개수 length 입력

    int maxlower = 0;         // 소문자 최대 연속 개수
    int maxdigit = 0;         // 숫자 최대 연속 개수
    int countlower = 0;         // 현재 소문자 연속 카운트
    int countdigit = 0;         // 현재 숫자 연속 카운트

    char ch;
    scanf("%c", &ch);         // 엔터카운트를 제거한다

    for (int i = 0; i < length; i++) {   // length개의 문자를 하나씩 읽음
        scanf("%c", &ch);                 // 문자 한 개씩 확인한다

        if (ch >= 'a' && ch <= 'z') {    // 소문자인 경우
            countlower++;                   // 소문자 연속 카운트를 1 증가
            countdigit = 0;                 // 숫자 연속은 끊고, 초기화
        } 
        
        else if (ch >= '0' && ch <= '9') { // 숫자인 경우
            countdigit++;                   // 숫자 연속 카운트를 1 증가
            countlower = 0;                 // 소문자 연속은 끊고, 초기화
        } 
        
        else {                          // 그 외 
            countlower = 0;                 // 소문자 연속을 끊는다
            countdigit = 0;                 // 숫자 연속을 끊는다
        }

        if (countlower > maxlower)          // 현재 소문자 연속이 최대보다 크면
            maxlower = countlower;          // 최댓값 갱신

        if (countdigit > maxdigit)          // 현재 숫자 연속이 최대보다 크면
            maxdigit = countdigit;          // 최댓값 갱신
    }

    printf("%d\n", maxlower);             // 소문자 최대 연속 개수 출력
    printf("%d\n", maxdigit);             // 숫자 최대 연속 개수 출력

    return 0;
}
