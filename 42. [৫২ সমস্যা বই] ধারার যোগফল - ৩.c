#include<stdio.h>
int main()
{
    int T,k,N;

    scanf("%d",&T);

    for(int i=1;i<=T;i++){
        scanf("%d",&N);

        for(k=N;k>=0;k--){
            if(k==0){
                printf("1\n");
            }
            else if(k==1){
                printf("2 + ");
            }
            else if(k==2){
                printf("2^%d + ",k);
            }
            else{
                printf("2^%d + ",k);
            }
        }
    }
    return 0;
}
