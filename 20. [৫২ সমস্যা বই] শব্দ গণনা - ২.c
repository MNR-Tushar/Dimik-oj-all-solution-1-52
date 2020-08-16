#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j;
    char s[10001];

    scanf("%d",&T);

    while(T--){

        scanf(" %[^\n]",s);
        char *word;
        word=strtok(s,",!;?. ");
        int count=0;
        while(word!=NULL){
            if(strlen(word)>0){
                count++;
            }
            word=strtok(NULL,",!,;,?. ");
        }
        printf("Count = %d\n",count);
    }

    return 0;
}

