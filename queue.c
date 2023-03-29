#include<conio.h>
#include<stdio.h>
#define size 3
int a[size],front=-1,rear=-1;

void enqueue(){
	if(rear==size-1){
	printf("QUEUE IS FULL\n");
	return;
	}
	printf("ENTER THE ELEMENT : ");
	scanf("%d",&a[++rear]);
	printf("%d IS ADDED\n",a[rear]);
}

void dequeue(){
	if(front==rear)
	printf("QUEUE EMPTY\n");
	else
	printf("%d IS REMOVED FROM QUEUE\n",a[++front]);
}

void display(){
	int i;
	if(front==rear)
	printf("QUEUE EMPTY\n");
	else
	for(i=front+1;i<=rear;i++)
	printf("%d\n",a[i]);
}

void main(){
	int choice;
	while(1){
	printf("1.ENQUEUE\n2.DEQUEUE\n3.SHOW\n4.EXIT\nENTER ANY ONE CHOICE : ");
	scanf("%d",&choice);
	switch(choice){
	case 1 : enqueue();
	break;
	case 2 : dequeue();
	break;
	case 3 : display();
	break;
	case 4 : printf("PRESS ENTER TO EXIT\n");
	getch();
	return;
	default: printf("INVALID CHOICE\n");
	}}
}