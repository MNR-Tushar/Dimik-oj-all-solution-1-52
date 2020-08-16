#include<stdio.h>
int main()
{
    int T,i;
    char s[101];

    scanf("%d",&T);
    while(T--){

        scanf(" %[^\n]",s);

        for(i=0;s[i]!='\0';i++){
            if(s[i]>='A' && s[i]<='Z'){
                printf("%d",s[i]-64);
            }
        }
        printf("\n");
    }
    return 0;
}
