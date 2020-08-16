#include<stdio.h>
long long int fact(long long int n)
{
    long long int i,p=1;

    for(i=1;i<=n;i++){
        p=p*i;
    }
    return p;
}
int main()
{
    int T;
    long long int n;

    scanf("%d",&T);

    for(int i=1;i<=T;i++){
        scanf("%lld",&n);

        double sum=0.0;
        for(long long int i=1;i<=n;i++){
            sum+=((double)i/fact(i));
        }
        printf("%0.4lf\n",sum);
    }
    return 0;
}
