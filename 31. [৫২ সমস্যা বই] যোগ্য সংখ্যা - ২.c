#include<stdio.h>
int main()
{
    int T,i;
    long long N;

    scanf("%d",&T);

    for(i=0;i<T;i++){

        scanf("%lld",&N);

        if(N>=6){
            printf("6\n");
        }
        if(N>=28){
            printf("28\n");
        }
        if(N>=496){
            printf("496\n");
        }
        if(N>=8128){
            printf("8128\n");
        }
        if(N>=33550336){
            printf("33550336\n");
        }

        if(i!=T-1){
            printf("\n");
        }

    }
    return 0;
}
