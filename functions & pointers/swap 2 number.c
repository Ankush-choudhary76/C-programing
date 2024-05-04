 #include<stdio.h>
 int main (){
    int n;
printf("enter a number n :");
scanf("%d",&n);
  int m;
printf("enter a number m :");
scanf("%d",&m);

int temp;
temp= n;
n=m;
m=temp;
printf("the value of n : %d\n",n );
printf("the value of m : %d",m) ;


 return 0;
}
