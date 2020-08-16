#include<stdio.h>
int main()
{
    int T,i;
    long long N,s,sum;

    scanf("%d",&T);

    while(T--){
        scanf("%lld",&N);
        sum=0;
        while(N!=0){
            s=N%10;
            sum=sum*10+s;
            N=N/10;
        }
        printf("%lld\n",sum);
    }

    return 0;
}
