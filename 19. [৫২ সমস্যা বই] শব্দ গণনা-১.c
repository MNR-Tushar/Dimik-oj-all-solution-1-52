#include<stdio.h>
int main()
{
    int T,i,j;
    char s[10001];

    scanf("%d",&T);

    while(T--){

        scanf(" %[^\n]",s);

        int count=0;

        for(i=0;s[i]!='\0';i++){
            if(s[i]==' '){
                count++;
            }
        }
        printf("Count = %d\n",count+1);
    }

    return 0;
}
