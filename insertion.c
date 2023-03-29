#include<stdio.h>
#include<conio.h>
void main(){
	int a[5],i,j,n,temp;
	printf("\n ENTER THE TOTAL NO OF ELEMENTS : ");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for (i=1;i<n;i++){ 
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}

	printf("\nTHE SORTED ARRAY IS : ");
	for (i=0;i<n;i++)
		printf("%d\t",a[i]);
}