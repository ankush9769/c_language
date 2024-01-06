#include <stdio.h>



//with arguement and returning value
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,c;
    printf("enter the first number=");
    scanf("%d",&a);
    printf("enter the second number=");
    scanf("%d",&b);
    c=sum(a,b);
    printf("the sum of these two no. is \n%d",c);
    return 0;
}


//with arguement and without returning value
char star(int x)
{
    for(int i=1;i<=x;i++)
    {
        printf("%c",'*');
    }
}
int main()
{
    int x,y;
    printf("how many stars you want to display=");
    scanf("%d",&x);
    y=star(x);
    printf("%c",y);

}


//without arguement and with retuning value
int takenumber()
{
    int i,x;
    printf("enter the number=");
    scanf("%d",&i);
}
int main()
{
    takenumber();
    
}



//without argument and without returning value
int pattarn()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",'#');
        }
        printf("\n");   
    }
}
int main()
{
    printf("this is a without agruement and without returning value fuction's example\n");
    pattarn();
    return 0;
}