#include<stdio.h>
void england () {
printf("you are from england\n");
return 0 ;
}
void pakistan () {
printf("you are from pakistan\n ");
england ();
return ;
}
void iran () {
    printf("you are from iran\n ");
pakistan ();
return ;
 }
 void india (){
 printf("you are from india\n");
 iran ();
 return ;
 }
 int main (){
india ();
 return 0;

 }
