#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a%2==0)
		printf("a is even %d ",a);
	else
		printf("a is odd %d ",a);
	getch();
	return 0;
}
