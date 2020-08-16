#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j;
    char s[1001];
    char s1[1001];

    scanf("%d",&T);
    while(T--){

        scanf("%s",s);
        for(i=strlen(s)-1,j=0;i>=0;i--,j++){
            s1[j]=s[i];
        }
        s1[j]='\0';

        if(0==strcmp(s,s1)){
            printf("Yes! It is Palindrome!\n");
        }
        else{
            printf("Sorry! It is not Palindrome!\n");
        }
    }
    return 0;
}
