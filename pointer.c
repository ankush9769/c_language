#include <stdio.h>

void main()
/*
{
    int a=1811;
    int *ptra=&a;
    int *ptrptra=&ptra;
    printf("the value of a is=%d",a);
    printf("\nthe address of the int a is=%x",ptra);
    printf("\nthe address of the ptra=%x",ptrptra);
}


{
    int a=45;
    int *ptra=&a;
    printf("%d\n",*ptra);
    ptra++;
    printf("%d\n",ptra);
    ptra--;
    printf("%d\n",ptra);

    printf("%d",*ptra+1);
}
*/

{
    int array[]={1,2,3,4,4,5,6,7,8,9};
    int ptr1=&array[0];
    printf("the first element of array is=%d\n",array[0]);
    printf("the address of first element is=%d\n",ptr1);
    //we can also write the same things in another way
    printf("the address of first element is=%d\n",&array[0]);
    printf("the address of second element is=%d\n",&array[1]);

}