#include<stdio.h>
int main (){
int n ,a=0, c,r;
printf("enter the number :");
scanf("%d",&n);
 c=n;
while (n !=0){
    r=n%10;
    a=(a*10)+r;
    n=n/10;
}
printf(" r number is :%d\n",a);
if(c==a){
    printf("it is armstrong");

} else {
     printf("not armstrong");
}





}

