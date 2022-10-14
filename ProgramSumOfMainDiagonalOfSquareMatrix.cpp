#include <stdio.h>
 
 
int main()
{
    int sqmatrix[10][10];
    int i,j,m,sum=0;
     
    printf("The number of rows and columns is same in a Square Matrix:\n");
	printf("Enter number of Rows/Columns in Square Matrix[10 Maximum]:");
    scanf("%d",&m);
       
    printf("\nEnter %d matrix elements in %d x %d Matrix:\n",m*m,m,m);
    for(i=0;i< m;i++)
    {
        for(j=0;j< m;j++)
        {
            printf("Enter element in Matrix[%d,%d]: ",i,j);
            scanf("%d",&sqmatrix[i][j]);
        }
    }
 
    printf("\nYou have entered the Square Matrix  :\n");
    for(i=0;i< m;i++)
    {
        for(j=0;j< m;j++)
        {
            printf("%d\t",sqmatrix[i][j]);/*print an element and a tab space*/
			if(i==j)
			  sum = sum + sqmatrix[i][j];
        }
        printf("\n");   /*for new line after completion of one row*/
    }
   printf("The Sum of the elements of Main diagonal\nof given Square Matrix is:%d",sum);
    return 0;   
}
