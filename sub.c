#include<stdio.h>
#include<conio.h>
int main( )
 {

	int marks;
	start:
	printf("Enter marks in any subject(maximum marks 100) \n");
	scanf("%d",&marks);
	if(marks<0 || marks>100) {
		printf("please enter marks between 0 to 100 \n");
		goto start;
	}
	if(marks>=0 && marks<=34)
	 {
		printf("Fail");
	}
	else if(marks>=35 && marks<=49) 
	{
		printf("Third class");
	}
	else if(marks>=50 && marks<=59) 
	{
		printf("Second class");
	}
	else if(marks>=60 && marks<=79) 
	{
		printf("First class");
	}
	else {
		printf("distinct");
	}
	getch( );
	return 0;
}
