#include<stdio.h>
int main()
{
    int T,i,n;

    scanf("%d",&T);

    while(T--){
        scanf("%d",&n);

        int n1=n;
        int sum=0;
        while(n1!=0){
            int r=n1%10;
            sum=sum+(r*r*r);
            n1=n1/10;
        }
        if(n==sum){
            printf("%d is an armstrong number!\n",n);
        }
        else{
            printf("%d is not an armstrong number!\n",n);
        }
    }
    return 0;
}
