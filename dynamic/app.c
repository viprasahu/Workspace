#include<stdio.h>
#include<arith.h>
int main(){
	printf("hello\n");
	printf("The two numbers are: 10 and 5\n");
	printf("Addition of two numbers is: %d\n",add(10,5));
	printf("Difference of two numbers is: %d\n",sub(10,5));
	printf("Multiplication of two numbers is: %d\n",mul(10,5));
	printf("Division of two numbers is: %d\n",div(10,5)); 
	return 0;
	getchar();
}
