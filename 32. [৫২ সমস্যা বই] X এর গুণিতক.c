#include<stdio.h>
int main()
{
    int T,i,j;


    scanf("%d",&T);

    for(i=0; i<T; i++)
    {
        long long X,N,j;

        scanf("%lld %lld",&X,&N);

        if(X>N)
        {
            printf("Invalid!\n");
        }
        else
        {

            for(j=1; j<=N; j++)
            {
                if(j%X==0)
                {
                    printf("%lld\n",j);
                }
            }
        }

        printf("\n");
    }
    return 0;
}
