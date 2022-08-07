/*An employee contains details suca as his ID,Name,Address and Salary.
Salary.
Salary element includes basic pay,bonus and other allowances.
ID contains alpha-numeric values, Name contains Firstname,Middlename(optional),Lastname(optional)
containing only alphabets.
Address can contain country name,state,city,area,street name,house number.Salary contains only decimal values.

Write a c program to define an appropriate structure for the given requirement and accept N employees.
Calculate the sum of all the employee's salary and show the tasks and implement the array of structure using
pointers.
*/
#include<stdio.h>
#include<conio.h>
struct Employee
{
    char *ID;
    struct Name
    {
        char *firstname,*middlename,*lastname;
    };
    struct Address
    {
        char *country,*state,*city,*area,*street_name,*house_no;
    };
    char *designation;
    struct Salary
    {
        float basic, bonus, others;
    };
};

void main()
{
    struct Employee *e;
    e=(struct Employee
}
