// function without parameter but with returns value

#include<stdio.h>
#define PI 3.146
int getNumber(){
	return 10;
}
float areaCircle(){
	float radius=45;
	return PI*radius*radius;
}

int main(){
	int x=getNumber();
	printf("Number=%d",x);
	printf("\n\n");
	
	printf("Area of circle=%.2f\n",areaCircle());
	
	return 0;
	
	
}
