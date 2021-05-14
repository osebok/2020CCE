# 2020CCE
## 第一個程式碼
```c
#include <stdio.h>
int main()

{
	int a,b,c,d;
	scanf("%d",&a);
	printf("%d=50*%d+5*%d+1*%d\n",a,a/50,a%50/5,a%50%5/1);
	
}
```
## 第二個程式碼
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
## 第三個程式碼
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
## 第四個程式碼
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

## 第五個程式碼
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
## 第六個程式碼
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
## 第七個程式碼
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
## 第八個程式碼
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
## 第9個程式碼
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfAll(){
for(int i=0;i<5;i++)printf("%d ",a[i]);
   printf("\n");
   }
 int main()
 {

     printfAll();

     int* p=&a[2];
     *p=222;
     printfAll();
     p=p+2;
     *p=666;
     printfAll();
 }
 ```
## 第10個程式碼
```c
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main(){
int b[10];

int *p=(int*)malloc(sizeof(int)*10);

return 0;
}
```
## 第11個程式碼
```c
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main(){
int b[10];

int *p=(int*)malloc(sizeof(int)*10);

return 0;
}
```
## 第12個程式碼
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfAll(){
for(int i=0;i<5;i++)printf("%d ",a[i]);
   printf("\n");
   }
 int main()
 {

     printfAll();

     int* p=&a[2];
     *p=222;
     printfAll();
     printf("p心理小紙條的值是:%d\n",p);
     p=p+2;
     *p=666;
     printfAll();
     printf("p心理小紙條的值是:%d\n",p);
     p--;
     *p=555;
     printfAll();
     printf("p心理小紙條的值是:%d\n",p);
 }
 ```
## 第13個程式
 ```c
 #include <stdio.h>
struct DATA{
    int x, y;
    }a[3] ;
struct DATA b = {100,200};
int main()
{
    for(int i=0;i<3;i++){
        printf("a[%d]:%d %d\n", i,a[i].x, a[i].y);
    }
    printf("b: %d %d\n",b.x,b.y);

    struct DATA c;
    printf("c: %d %d 像亂碼\n",c.x, c.y);
    c = b;
    printf("c: %d %d\n",c.x,c.y);

}
```
## 第14個程式
```c
#include <stdio.h>
struct POINT{
    float x, y, z;
    };
struct POINT point[5]={{0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1}};
int main()
{
    struct POINT * p =&point[0];
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);

    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
}
```
## 第15個程式
```c
#include <stdio.h>
struct POINT{
float x, y;
};
int main()
{
struct POINT a={4.1,3,2.};
printf("%f%f\n",a.x,a.y);

return 0;
}
```
## 第16個程式
```c
#include <stdio.h>
struct POINT{
float x, y;
};
int main()
{
struct POINT a;

}
```
## 第17個程式
```c
#include <stdio.h>
struct POINT{
float x, y;
};
int main()
{
struct POINT a={4.1,3,2.};
printf("%f%f\n",a.x,a.y);

a.x=1;
a.y=2;
printf("%f %f\n",a.x,a.y);

return 0;
}
```
## 第18個程式
```c
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	scanf("%s",line[i]);
	}
	char temp[10];
	for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
	if(strcmp(line[i],line[j])>0){
	strcpy(temp,line[i]);
	strcpy(line[i],line[j]);
	strcpy(line[j],temp);
	}
	}
	}
	for(int i=0;i<n;i++){
	printf("%s\n",line[i]);
	}
	}
```
    
## 第19個程式
    
```c
    #include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if(strcmp(line,line2)>0){
            printf("左邊大\n");
    }else{
    printf("右邊大\n");
    }





}
```
## 第20個程式
```c
#include <stdio.h>
int main()
{
printf("請看看值是多少:%d",'\0');




}
```
## 第21個程式
```c
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};
    for(int i=0;i<5;i++){
        printf("%s\n",line[i]);
    }







}
```
## 第22個程式
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n",line);
    printf("%s\n",line2);
    char line3[]="majority";
    printf("%s\n",line3);
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("你看看你看看,現在印出來的line4:==%s==\n",line4);







}
```
## 第23個程式
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n",line);
    printf("%s\n",line2);
    }
```
## 第24個程式
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//char line[100][10];
int compare( const void * p1, const void * p2 ){
    char * s1 = (char*) p1;
    char * s2 = (char*) p2;
    
    return strcmp( s1, s2);
}
char line[4][10]={"decline","proper","majority","bullet"};
//char temp[10];
int main()
{
    int n=4;
    //scanf("%d", &n);
    //for(int i=0; i<n; i++){
    //    scanf("%s", line[i]);
    //}
    
    qsort( line, n, sizeof(char[10]), compare);
    
    for(int i=0; i<n; i++){
        printf("%s\n", line[i]);
    }
}
```
## 第25個程式
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare( const void *p1,const void *p2){
   return strcmp( (char*)p1,(char*) p2);
   }
int main()
{
int T;
scanf("%d\n\n",&T);
for(int t=0;t<T;t++){
int N=0;
while(gets(line)!=NULL){
if(strcmp(line,"") == 0 )break;
strcpy(tree[N],line);
N++;
}
qsort(tree, N, 32,compare);
if(t>0) printf("\n");
int ans=1;
printf("%s ",tree[0] );
for(int i=0;i<N-1;i++){
if(strcmp(tree[i],tree[i+1]) == 0){
ans++;
}else{
printf("%.4f\n",100*ans/(float)N);
ans=1;
printf("%s ",tree[i+1] );
}
}
printf("%.4f\n",100*ans/(float)N);
}
}
```
## 第26個程式
```c
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};
int compare( const void *p1,const void *p2)
{
    int d1 = * (int*)p1;
    int d2 = * (int*)p2;
    if(d1>d2)return 1;
    if(d1==d2)return 0;
    if(d1<d2)return -1;
}
int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
```
