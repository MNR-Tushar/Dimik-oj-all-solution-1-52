#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    double x1,x2,y1,y2,r;

    scanf("%d",&T);

    while(T--){
        scanf("%lf %lf",&x1,&y1);
        scanf("%lf",&r);
        scanf("%lf %lf",&x2,&y2);

        double l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

        if(l<=r){
            printf("The point is inside the circle\n");

        }
        else{
            printf("The point is not inside the circle\n");
        }
    }

    return 0;
}
