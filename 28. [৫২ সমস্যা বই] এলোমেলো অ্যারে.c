#include<stdio.h>
int main()
{
    int T,i,n;

    scanf("%d",&T);

    while(T--){
        scanf("%d",&n);
        int array[n];

        for(i=0;i<n;i++){
            scanf("%d",&array[i]);
        }

        int s=1;
        for(int j=1;j<n;j++){
            if(array[j]<array[j-1]){
                s=0;
                break;
            }
        }
        if(s==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
