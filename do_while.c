#include<stdio.h>
int main()
{
	
//	int choice;
//	do{
//		printf("\n1.Hello \n 2.Bye \n3.exit \n-- Enter ypu choice");
//		scanf("%d",&choice);
//		if(choice==1)
//		{
//			printf("Hello \n");
//		}else if(choice==2)	{
//			printf("Bye \n");			
//		}
//	
//	}while(choice!=3);
//	

//-----------------count-----------------
//	int num=234353536, count=0;
//	do
//	{
//		count++;
//		num= num/10;
//	}while(num>0);
//		printf("Total digit: %d",count);
//	


// ------------------sum--------------
  int num=12344647,digit,sum=0;
  do
  {
  	digit=num%10;
  	sum=sum+digit;
  	num=num/10;
  }
  while(num>0);
  printf("Total sum :%d",sum);
	return 0;
}
