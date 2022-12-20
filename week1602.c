#include <stdio.h>
#include <string.h>
char line[3000];
char line2[2000];

int main()
{
    scanf("%s",line);

    int N=strlen(line);
    printf("%d\n",N);

    strcpy(line2,line);
    printf("line2: %s\n",line2);
}
