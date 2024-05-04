#include<stdio.h>
int main () {
int n ;
printf("ENTER A NUMBER : ");
scanf("%d",&n);
int s = n-1;

for (int i=1;i<=n ;i++){
        int a = i-1;
    for(int j =1 ;j<=s;j++){
        printf(" ");
    } s--;
    for(int k =1;k<=i;k++){
            char ch = (char)(k+64);
        printf("%c",ch);

    }
    for(int l=a;l>=1;l--){
            char ch = (char)(l+64);
    printf("%c",ch);
    }
printf("\n");

}

return 0 ;

}
