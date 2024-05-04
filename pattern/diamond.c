#include<stdio.h>
int main (){
int n ;
printf("ENTER A NUMBER :");
scanf("%d",&n);
int nsp=n;
int a ;
for (int i=1;i<=n;i++){
        a=i-1;
    for(int j=1;j<=nsp;j++){
        printf(" ");}nsp--;
        for (int k=1;k<=i;k++){
            printf("*");}
        for(int l=1;l<=a;l++){
            printf("*");
        }printf("\n");}
for(int m=1;m<=2*n+1;m++){
    printf("*");}printf("\n");
int b=n;
int d=n-1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){printf(" ");}
    for(int k=1;k<=b;k++){
printf("*");
    }b--;
    for(int l=1;l<=d;l++){
    printf("*");
    }d--;
printf("\n");
}
return 0;
}
