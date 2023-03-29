#include<stdio.h>
#include<conio.h>

int a[10];
void mergesort(int low, int high);
void combine(int low, int mid, int high);

void main(){
	int i,n;
	printf("\nENETR THE TOTAL NO OF ELEMENTS :  ");
	scanf("%d",&n);
	printf("\nENTER THE ELEMENTS : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	mergesort(0,n-1);
	
	printf("\nTHE SORTED ARRAY IS : ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}

void mergesort(int low, int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		mergesort(low,mid);
		mergesort(mid+1,high);
		combine(low,mid,high);
	}
}

void combine(int low,int mid,int high){
	int i=low,j=mid+1,k=low,temp[10];
	while(i<=mid && j<=high)
	if(a[i]<=a[j])
	temp[k++]=a[i++];
	else
	temp[k++]=a[j++];
	while(i<=mid)
	temp[k++]=a[i++];
	while(j<=high)
	temp[k++]=a[j++];
	for(k=low; k<=high; k++)
	a[k]=temp[k];
}