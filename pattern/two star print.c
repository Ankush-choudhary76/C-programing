int main (){
int n ;
printf("enter a number  : ");
scanf("%d",&n);
int nst =4;
int nsp =1;

for (int i = 1; i<=n ; i++){


        for(int k =1;k<=nst;k++){
           printf("*");}
            for(int k =1;k<=nsp;k++){
                    printf(" ");
                     }


           for(int j=1;j<=nst;j++){
         printf("*");
           }









nsp+=2;
nst--;
printf("\n");
}


return 0 ;
}
