#include<stdio.h>
int main (){
int n,i,j,k;
printf("enter the number :");
scanf("%d",&n);
int a = n;
for(i=1;i<=n;i++){
    for(j=1;j<=a;j++){
        printf("#");
    }a--;
    for(k=1;k<=i;k++){
        printf("*");
    }
    printf("\n");

}
return 0;

}
