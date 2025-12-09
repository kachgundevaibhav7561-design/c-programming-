#include<stdio.h>
 int main(){
 	
 	//integer type
 	
 	int i=10;
 	short int si=5;
 	long int li=12007777;
 	unsigned int ui=20;
 	
 	// charactor type
 	 char c='A';
 	 
 	//floating point type
 	float f=3.14;
 	double d=3.1344233223;
 	long double ld=3.24325331313311424;
 	
 	printf("------integer types------\n");
 	printf("int :value= %d,size=%zu byte\n",i,sizeof(i));
 	return 0;
 }
