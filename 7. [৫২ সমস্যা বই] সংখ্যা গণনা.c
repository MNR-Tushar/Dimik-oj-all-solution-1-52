#include<stdio.h>
#include<stdlib.h>
int main()
{
    char line[100000];
    char *p,*e;
    long input;
    int T,i;

    scanf("%d",&T);

   while(T--){
        scanf(" %[^\n]", line);
        int count=0;
        for(p=line; ;p=e){
            input=strtol(p,&e,10);
            if(p==e){
                break;
            }
            count++;
        }
        printf("%d\n",count);

    }
    return 0;
}
