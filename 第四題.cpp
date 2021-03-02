#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90) printf("A\n");
	else if(90>a&&a>=80) printf("B\n");
	else if(80>a&&a>=60) printf("C\n");
	else printf("F\n");
}

