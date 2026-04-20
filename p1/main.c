#include <stdio.h>

int main()
{
    int answer = 0 , x = 0 ,turn = 0;        // 정답, 입력값, 시도횟수
   
    scanf("%d", &answer);                    // 정답 입력
   
    do{
        turn ++;                             // 루프를 돌 때마다 시도횟수를 1회 추가
        
        scanf("%d", &x);                     // 입력값을 받는다
       
        if (x > answer)
            printf("%d>?\n",x);              // 만약 x가 정답보다 크다면, 다음을 출력한다
       
        else if (x < answer)
            printf("%d<?\n",x);             // 만약 x가 정답보다 크지 않고, 정답보다 작으면 다음을 출력한다
       
        else
            printf("%d==?\n", x);            // 그 외에는 다음을 출력한다
       
       
   }while (x != answer);                    //루프의 조건 : x가 정답과 같지 않을때, 루프를 반복한다
    
    printf("%d\n", turn);                    // 시행횟수를 출력한다.

    return 0;
}
