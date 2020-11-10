#include<stdio.h>
main(){
	//Assigning values to a and b
	int a=5 , b=10;
	printf("Before swapping a=%d b=%d",a,b);
	//Arithmetic operations
	a=a+b;//now a=5+10 =15
	b=a-b;//since a=15,b=15-10 =5
	a=a-b;//now b=5 hence, a=15-5 =10
	printf("\nAfter swapping numbers a=%d b=%d",a,b);
	//Hence our numbers are swapped.
	return 0;
}
