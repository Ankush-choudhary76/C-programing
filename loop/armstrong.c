#include<stdio.h>
int main (){
int n ,c , r;
printf("enter the number :");
scanf("%d",&n);
int a = 0;
c=n;
while(n>0){
  r=n%10;
a= (r*r*r)+a;
n=n/10;
}
if (c==a){
    printf("number armstrong");
}else{ printf("not number is not armstrong");
}

}
