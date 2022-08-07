void main()
{
    int array[5],i,j,count=0;
    printf("ENTER VALUES:-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<5;i++)
    {
        count=0;
        for(j=0;j<5;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
        printf("FREQUENCY OF THE FOLLOWING ELEMENT %d is %d\n",array[i],count);
    }
}
