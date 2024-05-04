#include<stdio.h>
int main (){
int n ;
printf("enter a number  : ");
scanf("%d",&n);


for (int i = 1; i<=n ; i++){
       int a=i-1;

        for(int k =1;k<=n-i;k++){
           printf(" ");}
            for(int k =1;k<=i;k++){
                    printf("%d",k);}


     //       for(int j=i-1;j>=1;j--){
       //         printf("%d",j);
        //}


            for(int j=1;j<=i-1;++j){
                printf("%d",a);
        a--;}

    printf("\n");
}



return 0 ;
}
