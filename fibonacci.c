#include<stdio.h>
#include<conio.h>

int fib(int n){
if(n==1)
return 0;
if(n==2)
return 1;
return fib(n-1)+fib(n-2);
}

void main(){
int i,n;
printf("ENTER THE VALUE OF N : ");
scanf("%d",&n);
printf("THE FIBONACCI SERIES IS :\n");
for(i=1;i<=n;i++)
printf("%d ",fib(i));
}
