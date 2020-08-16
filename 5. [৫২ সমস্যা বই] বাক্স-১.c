#include<stdio.h>
int main()
{
    int T,N;

    scanf("%d",&T);

    for(int i=0; i<T; i++)
    {
        scanf("%d",&N);

        for(int j=0; j<N; j++)
        {
            for(int k=0; k<N; k++)
            {
                printf("*");

            }
            printf("\n");
        }
        if(i!=(T-1))
            printf("\n");

    }

    return 0;
}
