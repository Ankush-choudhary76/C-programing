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
            printf("*");};
        for(int l=1;l<=a;l++){
            printf("*");}
        printf("\n");}
        int b=n;
int d=n-1;
for(int i=1;i<=n-1;i++){
    for(int j=1;j<=i+1;j++){printf(" ");}
   for(int k=1;k<=b-2;k++){
printf("*");
    }b--;
    for(int l=1;l<=d;l++){
    printf("*");
    }d--;
printf("\n");
}
return 0;
}
