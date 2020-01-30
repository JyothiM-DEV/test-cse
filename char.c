#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter character ch: ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		printf("%c  is vowel",ch);
	else
	{
		printf("%c is not vowel",ch);
	}
	getch();
	return 0;
}
