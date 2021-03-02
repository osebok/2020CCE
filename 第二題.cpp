#include <stdio.h>
int main()
{
	int a,b=0;
	scanf("%d",&a);

	int i;
	scanf("%d",&i);

	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			b++;

		}
	}
	printf("%d\n",b);
}
