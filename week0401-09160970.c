#include <stdio.h>
int main()
{
    printf("�п�J��~�~��: ");

    int n;
    scanf("%d",&n);

    if(n%400==0) printf("�Ӧ~");
    else if(n%100==0) printf("���q�~/���~");
    else if(n%4==0) printf("�Ӧ~");
    else printf("���q�~/���~");
}
