#include <stdio.h>
int main()
{
    printf("A 的值是 %d\n",'A');
    printf("B 的值是 %d\n",'B');
    printf("C 的值是 %d\n",'C');

    for(int c = 'A';c<='Z';c++){ ///要注意這邊c要打小寫
        printf("%c 的值是%d\n",c,c);
    }
}
