#include<stdio.h>
int main()
{
	int a,b,choice;
	char cont;
	
	do
	{
		printf("====calculator====\n");
		printf("1.Addition(+)\n");
		printf("2.Substraction(-)\n");
		printf("3.Multiply(*)\n");
		printf("4.Division(/)\n");
		printf("0.exit \n");
		
		printf("Enetr a choice \n");
		scanf("%d",&choice);
		
		if(choice !=0 && choice<=4){
			printf("Enter first number:");
			scanf("%d",&a);
			printf("Enter a second number:");
			scanf("%d",&b);
			
		}
		
		switch(choice){
			case 1:
				printf("sum =%d\n",a+b);
				break;
			case 2:
				printf("sub =%d\n",a-b);
				break;
			case 3:
				printf("multiply=%d\n",a*b);
				break;
			case 4:
				printf("division =%d\n",a/b);
				break;
			case 0:
				printf("Existing....\n ");
				break;
			default:
				printf("Invalid choice\n");		
		}
		if(choice!=0){
			printf("Do you want to perfrom another operation (y/n) \n");
			scanf(" %c",&cont);
		}else{
			cont ='n';
		}
	}while(cont=='y'||cont=='Y');
	
	return 0;
}
