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
 	long double ld=3.134233234;
 	
 	printf("------integer types------\n");
 	printf("int:value= %d,size=%zu byte\n",i,sizeof(i));
 	printf("shortint:value= %d,size=%zu byte\n",si,sizeof(si));
 	printf("longint:value= %ld,size=%zu byte\n",li,sizeof(li));
	printf("unsignedint:value= %u,size=%zu byte\n",ui,sizeof(ui));
	
	printf("-----charactor type------\n");
	printf("char: value=%c,size=%zu byte\n",c,sizeof(c));
	
	printf("------Floating point-------\n");
	printf("float: value=%f,size %zu byte\n",f,sizeof(f));
	printf("double: value=%lf,size %zu byte\n",d,sizeof(d));
	printf("long double: value=%Lf,size %zu byte\n",ld,sizeof(ld));


	
	



 	return 0;
 }
