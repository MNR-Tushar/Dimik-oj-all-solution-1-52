#include<stdio.h>
unsigned long long a,b; gcd(unsigned long long a,unsigned long long b)
{
    while(b!=0){
        unsigned long long temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    unsigned long long a,b;
    int T;

    scanf("%d",&T);

    while(T--){
        scanf("%llu %llu",&a,&b);

        printf("LCM = %llu\n",(a*b)/gcd(a,b));
    }
    return 0;
}
