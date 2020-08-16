#include<stdio.h>
#include<string.h>
int main()
{
    int T,i;
    char s[10001];

    scanf("%d",&T);

    while(T--){

        scanf(" %[^\n]",s);

        int len=strlen(s);
        for(i=0;i<len;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='I' || s[i]=='U'){
                printf("%c",s[i]);
            }
        }
        s[i]='\0';
        printf("\n");
        for(i=0;i<len;i++){
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!=' ' && s[i]!='A' && s[i]!='E' && s[i]!='O' && s[i]!='I' && s[i]!='U'){
                if(s[i]>='0' && s[i]<='9'){
                    continue;
                }
                printf("%c",s[i]);
            }
        }
        s[i]='\0';
        if(T!=0){
            printf("\n");
        }
    }
    return 0;
}
