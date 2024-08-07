/*WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array */

#include<stdio.h>
main()
{
    int matrix1[2][2]={{1,2},{3,4}};
    int matrix2[2][2]={{5,6},{7,8}};
    int result[2][2];
    int i,j,k;

    printf("Addition of two matrix :\n");
    for(i=0;i<2;i++)
	{
        for(j=0;j<2;j++)
		{
            result[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction of two matrix :\n");
    for(i=0;i<2;i++)
	{
        for(j=0;j<2;j++)
		{
            result[i][j]=matrix1[i][j]-matrix2[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplication of two matrix :\n");
    for(i=0;i<2;i++)
	{
        for(j=0;j<2;j++)
		{
            result[i][j]=0;
            for(k=0;k<2;k++)
			{
                result[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
