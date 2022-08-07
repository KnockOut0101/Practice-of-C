#include<stdio.h>
struct complex
{
    float a;
    float b;
    float c;
    float d;
    float i;
};
void main()
{
    struct complex complex={};
    scanf("%f%f%f%f%f",&complex.a,&complex.b,&complex.c,&complex.d,&complex.i);
    if(((complex.a+complex.b*complex.i)+(complex.c+complex.d*complex.i))==((complex.a+complex.c)+(complex.b+complex.d)*complex.i))
    {
        printf("true %f((complex.a+complex.b*complex.i)+(complex.c+complex.d*complex.i))==%f((complex.a+complex.c)+(complex.b+complex.d)*complex.i)",((complex.a+complex.b*complex.i)+(complex.c+complex.d*complex.i)),((complex.a+complex.c)+(complex.b+complex.d)*complex.i));
    }
}
