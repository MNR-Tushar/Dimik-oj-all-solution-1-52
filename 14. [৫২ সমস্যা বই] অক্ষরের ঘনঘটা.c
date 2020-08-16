#include<stdio.h>
#include<string.h>
int main()
{
    int T,i;
    char first_line[10001];
    char second_line[2];
    scanf("%d",&T);

    while(2*T--){
        scanf(" %[^\n]", first_line);
        scanf("%s", second_line);
        int count=0;
        for(i=0;i<strlen(first_line);i++){
            if(second_line[0]==first_line[i]){
                count++;
            }
        }
        if(count==0){
            printf("'%c' is not present\n", second_line[0]);
        }
        else{
            printf("Occurrence of '%c' in '%s' = %d\n",second_line[0],first_line,count);
        }
    }
    return 0;
}
