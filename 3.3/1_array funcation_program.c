// 
#include <stdio.h>


findMax(int arr[], int n) 
{
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
    }
    return max;
}

int main() 
{
    int n;

   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter the elements of the array:\n");
    int i;
    for (i = 0; i < n; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    int max = findMax(arr, n);

  
    printf("The maximum number in the array is: %d\n", max);

    
}

