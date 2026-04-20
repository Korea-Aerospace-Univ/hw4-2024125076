

#include <stdio.h>

int main(void)
{
    int i=0,j=0,num=0;
    scanf("%d", &i);
    
    do{
        scanf("%d", &j);
        
        if(j>i){
            printf("%d>?\n",j);
            num += 1;
        }
        else if(j<i){
            printf("%d<?\n",j);
            num += 1;
        }
        
        
    } while(i != j);
    printf("%d==?\n",i);
    printf("%d\n",num+1);
    

    return 0;
}
