//Write a C program to check whether an alphabet is vowel or consonant using switch case.

#include<stdio.h>
#include<ctype.h>
int main(){

    char ch;

    printf("enter any alphabet:");
    scanf(" %c", &ch);

    ch = tolower(ch);
    switch(ch){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("'%c' is vowel", ch);
break;

default:
if(ch>='a' && ch<='z')
printf("'%c' is consonant", ch);
else
printf("invalid input");

    }
    return 0;
}