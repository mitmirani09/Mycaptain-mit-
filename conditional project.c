#include<stdio.h>
main (){
	printf("Food Menu : \n1. French fries, Rs.115\n2. Garlic bread, Rs.99\n3. Momos, Rs.130\n4. Pizza, Rs.249\n5. Frankie, Rs.149");
	int choice;
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Thank you for ordering.\n You ordered French fries,Rs.115");
			break;
		case 2:
				printf("Thank you for ordering.\n You ordered Garlic bread,Rs.99");
				break;
		case 3:
				printf("Thank you for ordering.\n You ordered Momos,Rs.130");
				break;
		case 4:
				printf("Thank you for ordering.\n You ordered Pizza,Rs.249");
				break;
		case 5:
				printf("Thank you for ordering.\n You ordered Frankie,Rs.149");
				break;
				default : printf("The food you are trying to order is unavailable.");
   }
   return 0;
}

