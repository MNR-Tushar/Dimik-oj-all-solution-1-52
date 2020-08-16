#include<stdio.h>
#include<math.h>
int main()
{
    int T,a,b,c;
    double s,area;

    scanf("%d",&T);

    for(int i=1;i<=T;i++){
        scanf("%d%d%d",&a,&b,&c);
            s=(double)(a+b+c)/2.00;
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            printf("Area = %.3lf\n",area);
        }
    return 0;
}
