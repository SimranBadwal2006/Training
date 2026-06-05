#include<stdio.h>
void fun()
{
   static int x= 10;
   x++;
    printf("%d\n",x);
}
int main()
 {
    int x= 20;
    fun();
    fun();
    fun();
    printf("%d",x); 
     return 0;
 }