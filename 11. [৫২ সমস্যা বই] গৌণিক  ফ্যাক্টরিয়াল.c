#include<stdio.h>
int main()
{
    int T,N,i;

    scanf("%d",&T);

    for(i=1;i<=T;i++){
        scanf("%d",&N);

        long long int fact=1,i;
        for(i=2;i<=N;i++){
            fact=fact*i;
        }
        printf("%lld\n",fact);
    }

    return 0;
}
