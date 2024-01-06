#include <stdio.h>

void main()
{
    int age;
    printf("enter your age=");
    scanf("%d", &age);
    switch (age)
    {
        case 3:
             printf("the age is 3\n");
             break;

        case 13:
             printf("the age is 13\n");
             break;
         
        case 23:
             printf("the age is 23\n");
             break;

        default:
               printf("age does not match with 3,13,23");
        
        }
    
}