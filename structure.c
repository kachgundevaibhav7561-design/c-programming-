/*
structure:
structure is a user defined data type-
- it allows you to store multiple variable od differnt

syntax:
struct structure_Name{
		data_type member1;
		data_type member2;
		data_type member3;
		data_type member4;
		multiple of data ___

}
*/
#include<stdio.h>
struct Student{
	int roll_NO;
	float mark;
	char grade;	
};
int main(){
	struct Student s1;
	struct Student s2;
	
	s1.roll_NO=101;
	s1.mark=56.67;
	s1.grade='B';
	
	s2.roll_NO=102;
	s2.mark=78.87;
	s2.grade='A';
	
	printf("roll no id =%d\n",s1.roll_NO);
	printf("Mark is =%.2f\n",s1.mark);
	printf("Grade is =%c\n",s1.grade);
	
	printf("\nstudnet detailss2------\n");
	printf("roll no is =%d\n",s2.roll_NO);
	printf(" mark is =%2f\n",s2.mark);
	printf("grade is =%c\n",s2.grade);	
	
	
	
	return 0;
}
