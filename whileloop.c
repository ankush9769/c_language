#include <stdio.h>

void main()
/*
{
    int i=0;
    while(i<30)
    {
        i=i+3;
        printf("%d\n",i);  //here print the table of 3

    }
}


{
    int a=5;
    int b=1;
    int i=1;
    while (b<=a)
    {
        for(i=1;i<=b;++i)  //drow the tringle pattarn using while and for loop
        {
            printf("#");
        }   
        printf("\n");
        ++b;
    }
    
}

{
    int n,i;
    printf("enter the number=");
    scanf("%d",&n);
    i=n;
    while(i<=n && i>=0)     //write the reverse num till the users says
    {
        printf("%d\n",i);
        i=i-1;
    }
    return 0;
}

{
    char x="a";
    while(x<="z")
    {
        printf("%c\n",x);          //display the alphabats a to z
        ++x;
    }
    return 0;

}

{
    int i=1;
    while(i<=100)
    {
        if(i%2==0)
        {
            printf("%d\n",i);   //display all even num from 1 to 100
        }
        ++i;
    }
    return 0;

}

{
    
    int i=1;
    while(i<=100)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);   //display all even num from 1 to 100
        }
        ++i;
    }
    return 0;

}

{
    int num,sum=0,i=1;
    printf("enter the num till you want to add=");
    scanf("%d",&num);                              //print the sum of num till users enters
    while(i<=num)
    {
        sum+=i;
        ++i;
     
    }
    printf("%d",sum);
    return 0;
}    

{
    int num;
    int count=0;
    printf("enter the for cournting the numbert of digit=");
    scanf("%d",&num);                                     //count the number of digit in given number
    while(num != 0)
    {
        num /= 10;
        count++;
    }
    printf("%d",count);
    return 0;
}
*/

//we display the fibonacci series by using iteration instead of recursive function
{
    int count1=0;
    int first=0,second=1;
    int sum=0;
    int num;
    sum=first+second;
    printf("how many series you want to display=");
    scanf("%d",&num);
    while(count1<num)
    {
        count1++;
        printf("%d ",sum);
        first=second;
        second=sum;
        sum=first+second;

    }

}





