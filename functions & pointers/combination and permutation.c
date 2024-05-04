#include<stdio.h>
int main (){
int n ,r;
printf("ENTER A NUMBER :");
scanf("%d",&n);
printf(" ENTER A NUMBER :");
scanf("%d",&r);
int nfact,rfact,nrfact;
nfact=1;
rfact=1;
nrfact=1;
for(int i=2;i<=n;i++){
    nfact=nfact*i;
}
for(int i=2;i<=r;i++){
    rfact=rfac`t*i;
}
for(int i=2;i<=n-r;i++){
    nrfact=nrfact*i;
}
int ncr = nfact/(rfact*nrfact);
printf("%d",ncr);





















return 0;
}
