#include<stdio.h>
#include<math.h>
int main()
{
    int T,N;

    scanf("%d",&T);

    while(T--){
        scanf("%d",&N);
        int sq=sqrt(N);
        if(sq*sq==N){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
