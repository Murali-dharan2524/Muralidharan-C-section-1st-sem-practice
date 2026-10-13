#include<stdio.h>

int main(){
    int a,n,i=0;
    scanf("%d%d",&n,&a);
    while (i<a+1){
        printf("%dX%d=%d\n",n,i,n*i);
        i++;
    }
return 0;
}
