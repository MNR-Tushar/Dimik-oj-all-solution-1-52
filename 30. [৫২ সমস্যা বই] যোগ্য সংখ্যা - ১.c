#include<stdio.h>
int main()
{
    int T;
    unsigned long long int N;
    scanf("%d",&T);

    while(T--){

        scanf("%llu",&N);

        unsigned long long int sum=0;

        for(int i=1;i<N;i++){
            if(N%i==0){
                sum=sum+i;
            }
        }
        if(sum==N){
            printf("YES, %llu is a perfect number!\n",N);
        }
        else{
            printf("NO, %llu is not a perfect number!\n",N);
        }
    }
    return 0;
}
