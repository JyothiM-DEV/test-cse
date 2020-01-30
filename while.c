#include<stdio.h>
#include<conio.h>
int main( ) 
{

	int n,i;
	printf("Enter n value \n");
	scanf("%d",&n);
	i=n;
	printf("Printing numbers till %d \n",n);
	while(i!=0)
	{
		printf("%d  ",i);
		i--; 
	}
	getch();
	return 0;
}
