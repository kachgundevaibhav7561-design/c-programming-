#include<stdio.h>
// function without parameter and without return 
 void msg(){
 	printf("Hello c programming \n");
 }
 void printstar(){
 	printf("\n****************\n");
 }
 
 void todaymenu(){
 	printf("1.Pizza\n");
	printf("2.Burger\n");
	printf("3.Sandwich\n");
 }
 void tomorrmenu(){
 	printf("1.Modak\n");
 	printf("2.Fish\n");
 	printf("3.Dosa\n");
 }
 
int main()
{
	printstar();
	todaymenu();
	printstar();
	tomorrmenu();
	printstar();
	
	return 0;
}
