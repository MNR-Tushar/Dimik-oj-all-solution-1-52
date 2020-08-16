#include<stdio.h>
#include<string.h>
int main()
{
    int T,N;

    scanf("%d",&T);

        while(T--){
        scanf("%d",&N);
        char name[N][22];

        for(int i=0;i<=N;i++){
            gets(name[i]);
        }

        for(int i=0;i<N;i++){
            for(int j=i;j<N;j++){
                    char temp[22];
                if(strcmp(name[i],name[j])>0){
                    strcpy(temp,name[i]);
                    strcpy(name[i],name[j]);
                    strcpy(name[j],temp);
                }
            }
        }

        for(int i=0;i<=N;i++){
            puts(name[i]);
        }


    }

    return 0;
}
