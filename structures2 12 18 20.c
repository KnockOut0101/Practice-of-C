#include<conio.h>
#include<stdio.h>
struct car
{
    char model[20];
    char company[20];
    float mileage;
    char type[20];
    float horsepower;
};
void main()
{
    struct car vehicle[20];
    int a,i;
    printf("ENTER NO. of CARS");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("ENTER COMPANY:-");
        scanf("%s",&vehicle[i].company);
        printf("ENTER CAR MODEL:-");
        scanf("%s",&vehicle[i].model);
        printf("ENTER TYPE:-");
        scanf("%s",&vehicle[i].type);
        printf("ENTER MILEAGE:-");
        scanf("%f",&vehicle[i].mileage);
        printf("ENTER HORSEPOWER:-");
        scanf("%f",&vehicle[i].horsepower);
    }
    for(i=0;i<a;i++)
    {
        printf("COMPANY %s\nMODEL %s\nTYPE %s\nMILEAGE %f\nHORSEPOWER %f",vehicle[i].company,vehicle[i].model,vehicle[i].type,vehicle[i].mileage,vehicle[i].horsepower);
    }
}
