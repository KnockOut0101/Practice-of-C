#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,s,s1,c=0,s2,s3,s4;
    printf("Enter order of matrix");
    scanf("%d",&n);
    int a[n][n];
    printf("\n Enter array elements");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    s2=0;
    s3=0;
    s4=0;
    for(i=0;i<n;i++)
    {
        s=0;
        s1=0;
        for(j=0;j<n;j++)
        {
            s=s+a[i][j];
        }
        if(s==139)
        {
            c=c+1;
        }
        for(j=0;j<n;j++)
        {
            s1=s1+a[j][i];
        }
        if(s1==139)
        {
            c=c+1;
        }
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                s2=s2+a[i][j];
            }
        }

        for(j=0;j<n;j++)
        {
            if((i+j)==(n-1))
            {
                s3=s3+a[i][j];
            }
        }
        for(j=0;j<n;j++)
        {
            if((i==0||i==(n-1))&&(j==0||j==(n-1)))
            {
                s4=s4+a[i][j];
            }
        }
    }
    if(s2==139||s3==139||s4==139)
    {
        c++;
    }
    if(c>0)
    {
        printf("Ramanujan Matrix");
    }
    else
    {
        printf("NOT");
    }
}





