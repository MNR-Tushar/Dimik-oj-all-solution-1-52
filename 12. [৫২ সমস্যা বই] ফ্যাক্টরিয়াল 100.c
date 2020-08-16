#include<stdio.h>
int main()
{
    int T,N;

    scanf("%d",&T);

    while(T--){
        scanf("%d",&N);

        int i;
        char fact[100000];
        fact[i]=1;
        for(int i=2;i<=N;i++){
            fact[i]=fact[i]-'0'*i;
        }
        printf("%s\n",fact);
        long long int mod,count=0;
        while(fact[i]>0){
            mod=fact[i]%10;
            if(mod==0){
                count++;
            }
            else{
                break;
            }
            fact[i]=fact[i]/10;
        }
        printf("%lld\n",count);
    }
}
