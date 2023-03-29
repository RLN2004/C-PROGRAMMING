#include <stdio.h>
#define size 5
void push(),pop(),show();
int top=-1;
int arr[size];

void main(){
	int choice;
	while(1){
	printf("\n1.PUSH\n2.POP\n3.SHOW\n4.EXIT\n");
	printf("ENTER YOUR CHOICE : ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		push();
		break;
	case 2:
		pop();
		break;
	case 3:
		show();
		break;
	case 4:
		return;
		break;
	default:
		printf("INVALID CHOICE");
	}
}
}

void push(){
	int x;
	if(top==size){
		printf("\nOVERFLOW");
	}
	else{
		printf("\nENTER THE ELEMENT TO BE PUSHED :");
		scanf("%d",&x);
		top=top+1;
		arr[top]=x;
	}
}

void pop(){
	if (top==-1){
		printf("\nUNDERFLOW");
	}
	else{
		printf("\nELEMENT POPED IS %d ",arr[top]);
		top=top-1;
	}
}

void show(){
	int i;
	if (top==-1){
		printf("\nUNDERFLOW");
	}
	else{
		printf("\nCURRENT STATUS OF STACK : \n");
		for(i=top;i>=0;i--){
			printf("%d\n",arr[i]);
		}
	}
}