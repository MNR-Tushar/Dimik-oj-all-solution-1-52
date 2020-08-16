#include<stdio.h>
#include<string.h>
int main()
{
    int T,n;
    char s1[100];

    scanf("%d",&T);

    while(T--){
        scanf("%s",&s1);

        int len=strlen(s1);
        n=s1[len-1]-'0';
        if(n%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    return 0;
}
