#include<stdio.h>
int main()
{
    int T,i;
    double cr,ar,r1,r2,B;

    scanf("%d",&T);

    for(i=1;i<=T;i++){
        scanf("%lf %lf %lf",&r1,&r2,&B);

        cr=(r2/(300-B))*6.00;
        ar=((r1-r2+1)/B)*6.00;
        if(r1<r2){
            ar=0.00;
        }
        printf("%0.2lf %0.2lf\n",cr,ar);


    }
    return 0;
}
