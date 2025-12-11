#include<stdio.h>
int main()
{	
	int a=-12, b=13;
	// bitwise and&
	printf("a&b=%d \n",a&b);
	
	//bitwise or  "|"
	printf("a|b=%d \n",a|b);
	
	//bitwise xor ^
	printf("a^b=%d \n",a^b);
	
	//bitwise left shift<<
	printf("a<<1=%d \n",a<<1);
	printf("a<<2=%d \n",a<<2);
	printf("b<<1=%d \n",b<<1);
	printf("b<<2=%d \n",b<<2);
	
	//bitwise rigth shift>>
	printf("a>>1=%d \n",a>>1);
	printf("a>>2=%d \n",a>>2);
	printf("b>>1=%d \n",b>>1);
	printf("b>>2=%d \n",b>>2);

	//bitwise compliment "~";
	printf("~a =%d \n",~a);


	return 0;
}
