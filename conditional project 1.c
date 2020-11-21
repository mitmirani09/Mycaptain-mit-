#include<stdio.h>
 main (){
 	int n;
	printf("Enter marks:");
	scanf("%d",&n);
	if (n>84)
	{
	printf("Grade A");
	}
	else if (n>69)
	{
		printf("Grade B");
	}
	else if (n>54)
	{
		printf("Grade C");
	}
	else if (n>39)
	{
		printf("Grade D");
	}
	else
	{
		printf("Grade F");
	}
	return 0;
	
}
