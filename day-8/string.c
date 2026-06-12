#include<stdio.h>
#include<string.h>
int main(){
// char s1[10]= "Hellooo";
// char s2[6] = "HellP";
// // printf("%d", strcmp(s1, s2));

// //strcpy - copy string data to another string
// printf("%s", strcpy(s2,s1));//buffer overflow//undefined

//strcate // addition of string
//strcat(des, source);


char s1[10]= "Hellooo";
char s2[6] = "HellP";
// printf("%s", strcat(s2,s1));
//strupr() //strlwr()
//strrev()
printf("%s\n", strupr(s1));
printf("%s\n", strlwr(s2));
printf("%s", strrev(s2));

//153 - 1^3+125+27         =>armstrong number
//1 = 1                       =>armstrong number
//1234 = 1^4+2^4+3^4+4^4          =>=>armstrong number
return 0;
}