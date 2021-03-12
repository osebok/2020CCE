# 2020CCE
##第一個程式碼
```c
#include <stdio.h>
int main()

{
	int a,b,c,d;
	scanf("%d",&a);
	printf("%d=50*%d+5*%d+1*%d\n",a,a/50,a%50/5,a%50%5/1);
	
}
```
##第二個程式碼
```c
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

在評量模式下，最後繳交的程式碼(評終碼)
--------------------------------------------------------------------------------

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
```
##第三個程式碼
```c
#include <stdio.h>
int main()
{
	int n,i,ans=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&n);
		if(n%3==0)
			ans++;
	}
	printf("%d\n",ans);
}
```
##第四個程式碼
```c
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
```

##第五個程式碼
```c
#include <stdio.h>
int main()
{
	int a,b,i,ans=1;
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++)
	{
		if(a%i==0 && b%i==0)
			ans=i;
	}
	printf("%d %d\n",a/ans,b/ans);
}
```
##第六個程式碼
```c
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);


}
```
##第七個程式碼
```c
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);

    int *p2=&n3;
    *p2=300;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);
}
```
##第八個程式碼
```c
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]=%d n[1]=%d n[2]=%d\n",n[0],n[1],n[2]);

    int *p=&n[0];
    *p=200;
    printf("n[0]=%d n[1]=%d n[2]=%d\n",n[0],n[1],n[2]);

    int *p2=&n[2];
    *p=300;
    printf("n[0]=%d n[1]=%d n[2]=%d\n",n[0],n[1],n[2]);
    p2=p;
    *p2=400;
    printf("n[0]=%d n[1]=%d n[2]=%d\n",n[0],n[1],n[2]);

    return 0;

}
```
##第個程式碼
##第10個程式碼
