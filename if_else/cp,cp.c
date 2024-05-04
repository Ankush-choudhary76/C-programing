#include<stdio.h>
int main (){
float cp,sp,p,l;//
printf("enter the cp and sp of product :");
scanf("%f%f",&cp,&sp);
p= sp-cp;
l=cp-sp;

if(p>0){
    printf("the seller made profit %f\n",p);
}

if(l>0){
     printf("the seller made loss %f\n",l);
}if(p==0){
 printf("no profit,no loss %f\n");
}



}







