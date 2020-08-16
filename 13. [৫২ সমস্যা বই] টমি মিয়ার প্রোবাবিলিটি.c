#include<stdio.h>
int main()
{
    int i,n,T;
    char s[210];

    scanf("%d",&T);

    while(T--){

        scanf(" %[^\n]",s);

        int count=1;
        for(i=0;s[i]!='\0';i++){
            if(s[i]==' '){
                count++;
            }
        }
        if(count==1){
            printf("1/%d\n",count);
        }
        else{
            printf("1/%d\n",(count*count)-count);
        }
    }

    return 0;

}
