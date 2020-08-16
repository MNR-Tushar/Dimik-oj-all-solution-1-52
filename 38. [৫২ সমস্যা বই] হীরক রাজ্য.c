#include<stdio.h>
int main()
{
    int T,n,m;

    scanf("%d",&T);

    while(T--){
        scanf("%d%d",&n,&m);

        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==i){
                    printf("%d",m);
                }
                else{
                    printf("%d",m);
                }
            }
            printf("\n");
        }


          for(int i=n-1;i>0;i--){
            for(int j=0;j<i;j++){
                if(j==i-1){
                    printf("%d",m);
                }
                else{
                    printf("%d",m);
                }
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
