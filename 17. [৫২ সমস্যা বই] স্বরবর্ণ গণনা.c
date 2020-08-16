#include<stdio.h>
#include<string.h>
int main()
{
    int T,i;
    char s[1001];

    scanf("%d",&T);

    while(T--){

        scanf(" %[^\n]",s);

        int len=strlen(s);
        int count=0;
        for(i=0;i<len;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                count++;
            }
        }
        printf("Number of vowels = %d\n", count);
    }

    return 0;
}
