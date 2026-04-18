#include<stdio.h>
int main(){
	int a,b;
	char operation;
	printf("enter your first number= ");
	scanf("%d",&a);
	printf("enter your second number= ");
	scanf("%d",&b);
	printf("enter operation  ");
	scanf(" %c",&operation);
	switch(operation){
		case '+' :
			printf(" %d+%d = %d",a,b,a+b);
			break;
		case '-' :
			printf(" %d-%d = %d",a,b,a-b);
			break;
		case '*' :
			printf(" %d*%d = %d",a,b,a*b);
			break;
		case '/' :
			if(b != 0)
        printf("%d / %d = %d", a, b, a/b);
            else
        printf("Division by zero not allowed");
			break;
		default:
			printf("you enter a wrong number");
	}
	return 0;
}