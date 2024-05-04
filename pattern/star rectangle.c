#include<stdio.h>
int main (){
int n ;
printf("enter a number  : ");
scanf("%d",&n);

for (int i = 1; i<=n ; i++){
        for(int k =1;k<=4;k++){
        if(i==1 || i==n){
            printf("*");
        }
         else if (k==1 ||k == 4){
        printf("*");          }
        else{
            printf(" ");
        }
        }
  printf("\n");

}

return 0 ;
}
