#include<stdio.h>
#include<conio.h>

struct Date
{
    int day,month,year;
};
struct Phone_Number
{
    char counrty_code[4];
    char number[15];
};

struct Student
{
    long PRN;
    struct Date *dob;
    char address[50];
    struct Phone_Number *phone_number;
    char email[345];
    struct Date *dojc;
    float attendance;
    int total_marks;
    char grade;
};

/*void accept{ struct Student *s, int N}
{
}*/

void main()
{
    struct Student s;
    scanf("%d",&s.PRN);
    scanf("%s",&s.address);
    scanf("%s",&s->phone_number.country_code);
    scanf("%s",&s.phone_number.number);
    printf("%d",s.PRN);
    printf("%s",s.address);
    printf("%s",s.phone_number.country_code);
    printf("%s",s.phone_number.number);

}
