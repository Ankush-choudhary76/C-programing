#include<stdio.h>
int main (){
    float bs,har,da,gs;
printf("enter the bs :");
scanf("%f",&bs);
if(bs<1500){
    har = bs*10/100;
    da = bs*90/100;
} else {
    har = 500;
    da= bs*98/100;


}

gs=bs+har+da;
printf("gross salar is = Rs %f\n",gs);









}
