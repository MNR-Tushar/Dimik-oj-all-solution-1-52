#include<stdio.h>
int main()
{
    int T,n,i;
    scanf("%d",&T);

    while(T--){
        scanf("%d",&n);
        int array[n];

        for(i=0;i<n;i++){
            scanf("%d",&array[i]);
        }

        printf("%d",array[0]);
        for(i=2;i<n;i+=2){
            printf(" %d",array[i]);
        }
        printf("\n");

    }
    return 0;
}
