#include<stdio.h>
#include<string.h>
int main()
{
    int T,n,j,ara[100];

    scanf("%d",&T);

    while(T--){
        int i=0;
        scanf("%d",&n);

        while(n--){
            scanf("%d",&ara[i]);
            i++;
        }
        for(int j=0;j<strlen(ara);j++){
            printf("%d\n",ara[j]);
        }
    }
}
