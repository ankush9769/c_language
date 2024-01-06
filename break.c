#include <stdio.h>

int main()
/*
{
    int i,age;
    for(i=1;i<=10;i++)
    {
        printf("enter you age=");
        scanf("%d",&age);
        if (age>100)
        {
            break;
        }
        
    }
}

{
    //exit the loop if i=5
    int i;
    for(i=1;i<10;i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d\n",i);
    }
}
*/
{
    //check wether the given number is prime or not
    int num,i,counter=0;
    printf("enter the number for checking the prime=");
    scanf("%d",num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            counter=1;
            break;
        }
    } 
    if(counter==0)
        printf("the given number is prime");
    else
        printf("the given number is not prime");
    return 0;
}