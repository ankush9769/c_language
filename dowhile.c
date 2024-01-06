#include <stdio.h>

int main()
{
    int num,index=0;
    printf("enter the number= ");
    scanf("%d", &num);

    do{
        index=index+1;
        printf("%d\n",index);  //here we print the number till the user says
    }
    while(index<num);
    return 0;
}