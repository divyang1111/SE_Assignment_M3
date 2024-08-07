/*WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice */

#include <stdio.h>
main()
{
    int n1,n2,i,j,temp;
    char choice;

    printf("Enter the size of the first array : ");
    scanf("%d",&n1);

    int arr1[n1];
    printf("\nEnter elements of the first array :\n");
    for(i=0;i<n1;i++)
	{
        scanf("%d",&arr1[i]);
    }

    printf("\nEnter the size of the second array : ");
    scanf("%d",&n2);

    int arr2[n2];
    printf("\nEnter elements of the second array :\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("\nChoose sorting order(a for ascending,d for descending) : ");
    scanf(" %c",&choice);

    if(choice=='a')
	{
        for(i=0;i<n1-1;i++)
		{
            for(j=0;j<n1-i-1;j++)
			{
                if(arr1[j]>arr1[j+1])
				{
                    temp=arr1[j];
                    arr1[j]=arr1[j+1];
                    arr1[j+1]=temp;
                }
            }
        }
    } 
	else if(choice=='d')
	{       
		for(i=0;i<n1-1;i++)
		{
            for(j=0;j<n1-i-1;j++)
			{
                if(arr1[j]<arr1[j+1])
				{
                    temp=arr1[j];
                    arr1[j]=arr1[j+1];
                    arr1[j+1]=temp;
                }
            }
        }
    }
	else
	{
        printf("\nInvalid choice!\n");
        return 1;
    }

    if (choice=='a')
	{
        for(i=0;i<n2-1;i++)
		{
            for(j=0;j<n2-i-1;j++)
			{
                if(arr2[j]>arr2[j+1])
				{
                    temp=arr2[j];
                    arr2[j]=arr2[j+1];
                    arr2[j+1]=temp;
                }
            }
        }
    } 
	else if(choice=='d')
	{	
        for(i=0;i<n2-1;i++)
		{
            for(j=0;j<n2-i-1;j++)
			{
                if(arr2[j]<arr2[j+1])
				{
                    temp=arr2[j];
                    arr2[j]=arr2[j+1];
                    arr2[j+1]=temp;
                }
            }
        }
    }

    printf("\nSorted first array : ");
    for(i=0;i<n1;i++)
	{
        printf("%d ",arr1[i]);
    }
    printf("\n");

    printf("\nSorted second array : ");
    for(i=0;i<n2;i++)
	{
        printf("%d ",arr2[i]);
    }
    printf("\n");
}
