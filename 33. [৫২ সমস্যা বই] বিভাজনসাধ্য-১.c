#include<stdio.h>
int main()
{
    int T,i;
    unsigned long long A,B,C;

    scanf("%d",&T);

    for(i=0;i<T;i++){

        scanf("%llu %llu %llu",&A,&B,&C);

        while(A<=B){
            if(A%C==0){
                printf("%llu\n",A);
                A+=C;
                continue;
            }
            A++;
        }

        if(i!=T-1){
            printf("\n");
        }
    }
    return 0;
}
