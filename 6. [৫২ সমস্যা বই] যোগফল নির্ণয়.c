#include<stdio.h>
int main()
{
    int T,N,sum=0,a,b,n;

    scanf("%d",&T);

    while(T--){
        scanf("%d",&N);

        a=N%10;
        n=N/10;
        b=n/1000;
        sum=a+b;

        printf("Sum = %d\n",sum);
    }

    return 0;
}
