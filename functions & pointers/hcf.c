#include<stdio.h>
int min (int a,int b){
if(a<b) return a;
else return b;


}

int gcf (int a,int b){
         int hcf;
 for(int i=1;i<=main(a,b);i++){
     if(a%i==0 && b%i==0) {
        hcf=i;
     }
 }
return hcf;
}
int main (){
int a ;
printf("entter a number :");
scanf("%d",&a);
int b;
printf("enter a number : ");
scanf("%d",&b);
int hcf=gcf(a,b);
printf("the hcf\gcf %d and %d ",a,b,hcf);






}
