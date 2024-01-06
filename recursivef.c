#include <stdio.h>
/*

//write the factorial of given number
int fact(int k)
{
    if(k<=0)
    {
        return 1;
    }
    else
    {
        return k * fact(k-1);
    }
}
int main()
{
    int num,result;
    printf("enter the number for factorial=");
    scanf("%d",&num);
    result=fact(num);
    printf("the factorial of given number is=%d",result);
    return 0;
}


//add the all preveus numbers from given number
int sum(int k)
{
    if(k>0)
    {
        return k + sum(k-1);      
    }
    else
    {
        return 0;
    }
}
int main()
{
    int result,n;
    printf("enter the numer till you want addition=");
    scanf("%d",&n);
    result=sum(n);
    printf("the sum of all numbers are=%d",result);
    return 0;
}
*/


//find fibo series of given number
int fibo(int k)
{
    if(k<=1)
    {
        return k;
    }
    else
    {
        return fibo(k-1) + fibo(k-2);
    }
}
int main()
{
    int num;
    printf("how many fibo series you want to display=");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
    
}