#include<stdio.h>
void swap(int *x,int *y){
int temp ;
temp = *x;
*x= *y;
*y=temp;
return ;

}
int main (){
int a= 9;
int b =3;
swap(&a,&b);
printf("ENTER S NUMBER :a %d\n",a);
printf("ENTER S NUMBER :b %d\n",b);
return 0 ;
}
