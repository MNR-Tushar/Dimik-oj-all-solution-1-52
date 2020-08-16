#include<stdio.h>
#include<string.h>
int main()
{
    int T,i;
    char s[1001];
    int count[26];

    scanf("%d",&T);

    while(T--){

        scanf(" %[^\n]",s);

        memset(count,0,sizeof count);
        for(i=0;i<strlen(s);i++){
            if(s[i]>='a' && s[i]<='z'){
                count[s[i]-'a']++;
            }
        }
        for(i=0;i<26;i++){
            if(count[i] !=0){
                printf("%c = %d\n", 'a'+i,count[i]);
            }
        }
        if(T!=0){
            printf("\n");
        }
    }
    return 0;
}

