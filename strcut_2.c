#include<stdio.h>
struct employee 
{
	int id_no;
	char name[20];
	char destination[20];
	int salary;
};
int main()
{	
	struct employee emp;
	printf("Enter employee id");
	scanf("%d",&emp.id_no);
	printf("Enter name:");
	scanf("%c",&emp.name);
	printf("Enter a Destination ");
	scanf("%s",&emp.destination);
	printf("Enter a salary");
	scanf("%d",&emp.salary);
	
	printf("Details of employee\n");
	printf("emp id is =%d",emp.id_no);
	printf("Employee name is =%c",emp.name);
	printf("Employee destination is =%s",emp.destination);
	printf("Employee salary=%d",emp.salary);

return 0;
}
