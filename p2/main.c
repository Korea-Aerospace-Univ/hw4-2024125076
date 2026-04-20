
#include <stdio.h>

int main()
{
    int N=0;
    char ch;
    int num_count=0,max_numcount=0;
    int ch_count=0,max_chcount=0;
    scanf("%d",&N);
    
    for (int i=0;i<=N;i++){
        scanf("%c",&ch);
        
        if(ch>='a' && ch<='z'){
            
            num_count=0;
            ch_count+=1;
            
        }
        else if(ch>='0' && ch<='9'){
            
            ch_count=0;
            num_count+=1;
        }
        if (ch_count>=max_chcount){
            max_chcount=ch_count;
        
        }
        if(num_count>=max_numcount){
            max_numcount=num_count;
        }
        
    }
    
    printf("%d\n",max_chcount);
    printf("%d\n",max_numcount);
    
    

    return 0;
}
