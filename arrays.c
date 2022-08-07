#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char a='A', string1[10],string2[10];
    int i, j, no, index=0,count=0;
    printf("Enter Size Of Pyramid:-");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",a);
            a++;
        }
        printf("\n");
        a='A';
    }
    printf("Enter A String:-");
    scanf("%s", &string1);
    for(i=0;i<=20;i++)
    {
        if(string1[i]=='a' || string1[i]=='e' || string1[i]=='i' || string1[i]=='o' || string1[i]=='u' || string1[i]=='A' || string1[i]=='E' || string1[i]=='I' || string1[i]=='O' || string1[i]=='U')
        {
            string2[index]=string1[i];
            index++;
            count++;
            printf("vowel %c\n",string1[i]);
        }
        else
        {
            printf("not a vowel\n");
        }
    }
    printf("Second string:- %s no. of vowels:-%d",string2,count);
}
