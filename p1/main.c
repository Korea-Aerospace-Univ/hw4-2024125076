

#include <stdio.h>

int main(void)
{
    int i=0,j=0,num=0; //i:정답,j:사용자 입력 숫자,num:시도 횟수 선언하고 초기화하기
    scanf("%d", &i); //정답 숫자 입력받기
    
    do{ //do-while 루프 시작
        scanf("%d", &j); //사용자 입력 숫자 입력하기
        
        if(j>i){ //입력 받은 숫자가 정답 숫자보다 컸을때 조건문 지정
            printf("%d>?\n",j); //입력값이 더 크다고 출력
            num += 1; //시도 횟수 증가시키기
        }
        else if(j<i){ //입력 받은 숫자가 정답 숫자보다 작았을 때 조건문 지정
            printf("%d<?\n",j); //입력값이 더 작다고 출력
            num += 1; //시도 횟수 증가시키기 
        }
        
        
    } while(i != j); //i와 j가 같지 않는 동안 반복
    printf("%d==?\n",j); //정답 숫자와 일치함을 출력
    printf("%d\n",num+1);//총 시도횟수+마지막 시도 1회를 더해서 출력
    

    return 0;
}
