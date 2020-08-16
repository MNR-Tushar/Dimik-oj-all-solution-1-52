#include<stdio.h>
#include<string.h>

int main(){
    char s [10000];

    int t,count,j,length;

    scanf("%d",&t);

    while(t--){
        scanf(" %[^\n]",s);
        length=strlen(s);
        count =1;

        for(j=0;j<length;j++){
                if(s[j]==' '){
                    if(s[j-1]>='0'&&s[j-1]<='9'){
                      count++;
                    }

                }
        }
        printf("%d\n",count);
    }
    return 0;
}
