#include<stdio.h>
#include<string.h>
int main()
{
//	printf("Enetr your name\n");
//	scanf("%s",name);
//	
//	printf("your name is =%s", name);

//printf("Enter you full name");
//fgets(fullName,sizeof(fullName),stdin);
//printf("full name is =%s",fullName);

/*
strlen----------length of string
char name[]="vaibhav kachgunde";
printf("length=%d",strlen(name));
	

//strcpy---------copy string
char a[20]="Hello";
char b[20];
strcpy(b,a);
printf("copied string= %s ",b);



//---- connect a string
char x[10]="vaibhav";
char y[10]=" kachgunde";
strcat(x,y);
printf("%s",x);


char a[10]="vaibhav";
char b[10]=" Maroti";
char c[10]="kachgunde";
strcat(a,b);
printf("%s",a);
strcpy(b,c);
printf("%s",c);


// compare----
char s1[10]="welcome";
char s2[10]="WELCOME";
if(strcasecmp(s1,s2)==0){
	printf("string are equal");
}else{
	printf("string are not equal");
}


char x[10]="VAIBHAV";
strlwr(x);
printf("%s",x);


//strreverse--------
char a[10]="vaibhav";
strrev(a);
printf("%s",a);


// 
char str[] ="vaibhav";
int len= strlen(str);
printf("first : %c \n",str[0]);
printf("last : %c \n",str[len-1]);

// length without strlen use----------
 char str1[10]= "vaibhav";
  int count=0;
 while(str1[count] != '\0')
 	count++;
 	printf("length is %d",count);
 	
 
 
  char str[]= "india is best";
  int i,count=1;
  for(i=0;str[i]!='\0';i++){
  	if(str[i]== ' ')
  	count++;
  	printf("the length is %d",count);
  }
  
  
  char a[10]="banana";
  int i;
  for(i=0;str[i]!= '\0';i++){
  	if(str[i]=='a')
  }
*/

 char str[10] , rev[20];
 printf("enter a string");
 scanf("%s",str);
 
 strcpy(rev,str);
 strrev(rev);
 
 if(strcmp(str,rev)==0)
 	printf("palindrome string \n");
 else
 	printf("not palindrome \n");
 

 
return 0;

}
