//check whether the alphabet is vowel or consonant in simple way
#include<stdio.h>
int main()
{
  char alp;
scanf("%c", &alp);
if(alp >= 'A' && alp <= 'Z')

    alp = alp + 32;

switch(alp)
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("The alphabet is a vowel.");
        break;
    default:
        printf("The alphabet is a consonant.");
}
return 0;
}