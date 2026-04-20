#include <stdio.h>

int main()
{
    int answer = 0 , x = 0 ,turn = 0;
   
    scanf("%d", &answer);
   
    do{
        turn ++;
        
        scanf("%d", &x);
       
        if (x > answer)
            printf("%d>?\n",x);
       
        else if (x < answer)
            printf("%d<?\n",x);
       
        else
            printf("%d==?\n", x);
       
       
   }while (x != answer);
    
    printf("%d\n", turn);

    return 0;
}
