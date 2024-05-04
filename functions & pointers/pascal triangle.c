#include<stdio.h>
//int factorial(int x){
//int fact =1;
//for(int i=2;i<=x;i++){
 //   fact=fact*i;
//}
//return fact;
//}
// combination(int n,int r){
//return factorial(n) /(factorial(r)*factorial(n-r));

//}
int main (){
    int n;
printf("enter a number :");
scanf("%d",&n);
int a;
a=n;

for(int i=0;i<=n;i++){
       for(int k=1;k<=n-i;k++){
           printf(" ");
        }a--;
       int first = 1;
    for(int j=0;j<=i;j++){
           // int icj = combination(i,j);
       // printf("%d  ",icj);
        printf("%d ",first);
       first = first*(i-j)/(j+1);  // ic(j+1)

    }
    printf("\n");
}




 return 0;
}
