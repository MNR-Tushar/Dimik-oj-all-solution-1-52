#include<stdio.h>
int main()
{
    int T,i;
    unsigned long long A,B,C,j,D;

    scanf("%d",&T);

    for(i=0;i<T;i++){
        scanf("%llu %llu %llu",&A,&B,&C);

        D=A*B;
        A=D;

        while(D<=C){
            printf("%llu\n",D);
            D=D+A;
        }

        if(i!=T-1){
            printf("\n");
        }
    }
    return 0;
}
