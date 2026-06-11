#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    // scanf("%s",str);// afterspace now stop reading
    //for multiple words - single line
    //gets() - removed from c11 after overflow issue
//fgets(variableName, sizeof(variableName), stdin)
//%[^\n]- [] - sets, ^ - not

// scanf("%[^\n]",str);
gets(str);
    printf("%s",str);
    return 0;
}