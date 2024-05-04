#include<stdio.h>
int main (){
int n ;
printf("ENTER A NUMBER :");
scanf("%d",&n);
int nsp=n;
int b = n;
for(int i=1;i<=2*n+1;i++){
    printf("*");
} printf("\n");

for(int i=1;i<=n;i++){
        int a = i-1;

    for(int j=1;j<=nsp;j++){

        printf("*");
        }nsp--;
        for(int k=1;k<=i;k++){
            printf(" ");
        }
        for(int l=1;l<=a;l++){
        printf(" ");}

       for(int j=1;j<=b;j++){
printf("*");
        }b--;

printf("\n");
}

return 0;
}



















