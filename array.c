#include <stdio.h>
void main()

/*
{
    int number[]={1,2,3,4,5,6,7,8,9};  //study about array 
    //how to access the element of array
    printf("%d_",number[0]);
    //how to change the element of array
    number[0]=10;
    printf("%d",number[0]);
    //loop in an array
    int i;                                     //we can also use the multidimentional array like 2D array
    for(i=0;i<9;i++)
    {
        printf("%d\n",number[i]);
    }
    //we can also set the size of the array
    int numbers[9];
}



{
    int marks[3];
    //printf("marks of first student is=%d",marks[0]);
    marks[0]=400;
    printf("marks of 1 student is=%d\n",marks[0]);
    
    marks[1]=500;
    printf("marks of 2 student is=%d\n",marks[1]);

    marks[2]=600;
    printf("marks of 3 student is=%d\n",marks[2]);

    marks[3]=700;
    printf("marks of 4 student is=%d\n",marks[3]);

}

//display the matrix
{
    int i,j;
    int num[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("the matrix is look like this=\n");  
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}



{
    //display the matrix by user
    int i,j;
    int num[3][3];
    printf("the matrix element=\n");  
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { 
            scanf("%d",&num[i][j]);
        }
        printf("\n");
    }
    printf("the matrix is=\n");  
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { 
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}    
*/

{


//multiplication of two matrix
    int i,j,k;
    int a[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    int b[3][4]={{9,8,7,1},
                 {6,5,4,2},
                 {3,2,1,3}};
    int result[3][4]={{0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0}};             
    printf("the multiplication of two matrix=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<3;k++)
            {
                result[i][j] += a[i][k]*b[k][j];
            }
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}





    

    
