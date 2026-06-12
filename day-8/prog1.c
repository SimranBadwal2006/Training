#include<stdio.h>
#include<string.h>
int main(){

// char s[]={'a','b',3};
// printf("%u",sizeof(s[1]));
// char str[]="Hello";
// str[1]='y';
// printf("%s",str);
// char*st="Hello";
// st[1]='y';
// printf("%s",st);
// char str[10];
// fgets(str, sizeof(str), stdin);
// printf("%s", str);

//string function : <string.h>- only declaration
//strlen() - length of string
// char str[20]= "hello"; //not include null character
// printf("%d\n", strlen(str));
// printf("%d", sizeof(str));

//strcmp(str1, str2) -0,1,-1
char s1[10]= "Hellooo";
char s2[6] = "HellP";
// printf("%d", strcmp(s1, s2));

//strcpy - copy string data to another string
printf("%s", strcpy(s2,s1));
return 0;
}