#include <stdio.h>

int main()


{
    int i,j,a;
    printf("how many lines of pattern you want to display=");
    scanf("%d",&a);
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=j;++i)  //drow the tringle pattarn using for loop
        {
            printf("#");
        } 
        printf("\n");  
    }
} 
/*
  
  
{
    int i;
    for(i=1;i<=10;++i)
    {
        printf ("%d\n",i);                  //display the num till 10
    }
}

{
    int x,i,sum=0;
    printf("enter the positive integer for addition=");
    scanf("%d",&x);                                     //sum of the num till the users says
    for(i=1;i<=x;i++)
    {
        sum+=i;
    }
    printf("the sum of iteger is= %d",sum);
    return 0;
}

{
    int num,x,i;
    printf("enter the positive integer for table=");  //write the table for users num.
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        x=i*num;
        printf("%d\n",x);
    }
}
*/