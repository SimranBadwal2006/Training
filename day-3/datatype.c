#include <stdio.h>
// #include "hi.c"
#include <string.h>
// extern int z;
// extern void hello(int y);

int main()
{
    // hello(10);
    // hello(10);
    // hello(10);
//     int a=10;
//     int b=20;
//     printf("%d\n%d\n%d", a++ + --b,a,b);
//     return 0;
// }
// int a;
// int b;
// char c;
// scanf("%d %c%d ",&a,&c,&b);
// printf("%d\n%d\n%c", a, b, c);
//     return 0;
// }
char str[20]= "Hello World";
int len= strlen(str);
printf("%d\n", len);
for(int i=0; str[i]!='\0'; i++)
{
    printf("%c\n", str[i]);
}
    return 0;
}