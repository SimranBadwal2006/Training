#include<stdio.h>

struct student{
    char name[30];
    int rollno;
    char add[50];
    char section[20];
};
int main(){
    struct student s1={"Nilakshi",562,"Hoshiarpur","B"};

    printf("%s %d %s %s",s1.name,s1.rollno, s1.add, s1.section);
        printf("\n%d", sizeof(s1));
        return 0;
}