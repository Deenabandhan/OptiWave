#include<stdio.h>
#include<string.h>
int main(){
    int x=0;
    int n;
    scanf("%d",&n);
    char string[n][4];
    for(int i=0;i<n;i++){
        scanf("%s", &string[i][0]);
    }
    int i=0;
    while(i<n){
        if(strcmp(string[i],"X++")==0 || strcmp(string[i],"++X")==0){
            x++;
        }
        else
        x--;
        i++;
    }
    printf("%d\n", x);
}