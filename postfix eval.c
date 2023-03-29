#include<stdio.h>
#include<conio.h>
#include<math.h>
double s[20];
int top=-1;

void push(double val){
s[++top]=val;
}

double pop(){
return s[top--];
}

void main(){
char exp[30];
double op1,op2;
int i=0,n;
printf("Enter the postfix expression:\n");
fflush(stdin);
gets(exp);
while(exp[i]!='\0'){
if(exp[i]!=' '){
if(exp[i]>='0'&&exp[i]<='9'){
n=0;
while(exp[i]>='0'&&exp[i]<='9'){
n=n*10+(exp[i]-'0');
i++;
}
push(n);
i--;
}
else{
op2=pop();
op1=pop();
switch(exp[i]){
case'+':push(op1+op2);
break;
case'-':push(op1-op2);
break;
case'*':push(op1*op2);
break;
case'/':push(op1/op2);
break;
case'^':push(pow(op1,op2)) ;
break;
case'%':push((int)op1%(int)op2);
}
}
}
i++;
}
printf("The value of the postfix expression is %lf",pop());
}