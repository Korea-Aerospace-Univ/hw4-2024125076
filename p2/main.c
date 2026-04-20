
#include <stdio.h>

int main(void)
{
    int N=0;// 입력받을 문자 개수 선언 후 초기화
    char ch='\0';// 읽어들일 문자를 저장할 변수 선언 후 초기화
    int num_count=0,max_numcount=0;//현재 연속 숫자 개수 카운트와 숫자길이 최대 개수 카운트 선언 후 초기화
    int ch_count=0,max_chcount=0;// 현재 연속 문자 개수 카운트와 문자길이 최대 개수 카운트 선언 후 초기화
    scanf("%d",&N);//문자의 개수 입력받기
    
    for (int i=0;i<=N;i++){//N번동안 문자 검사를 위해 반복문 생성
        scanf("%c",&ch);//한문자씩 입력받기
        
        if(ch>='a' && ch<='z'){//소문자 검사를 위한 조건문 생성
            
            num_count=0;//숫자는 끊겼으므로 숫자 카운트는 리셋
            ch_count+=1;//소문자 카운트 증가       
            
        }
        else if(ch>='0' && ch<='9'){//숫자 검사를 위한 조건문 생성
            
            ch_count=0;//문자는 끊겼으므로 문자 카운트는 리셋
            num_count+=1;//숫자 카운트 증가
        }
        if (ch_count>=max_chcount){//현재 소문자 카운트가 최대 카운트보다 높으면 최댓값 갱신
            max_chcount=ch_count;//최댓값 갱신
        
        }
        if(num_count>=max_numcount){//현재 숫자 카운트가 최대 카운트보다 높으면 최댓값 갱신
            max_numcount=num_count;//최댓값 갱신
        }
        
    }
    
    printf("%d\n",max_chcount);//최대 연속 개수 출력
    printf("%d\n",max_numcount);//최대 연속 개수 출력
    
    

    return 0;
}
