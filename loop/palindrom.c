#include<stdio.h>
int main (){
int n ,c , r;
printf("enter the number :");
scanf("%d",&n);
int a = 0;
c=n;
while(n>0){
  r=n%10;
a= (a*10)+r;
n=n/10;
}
if (c==a){
    printf("number is  palindrom");
}else{ printf("not number is not palindrom");
}

}
