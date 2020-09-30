#include <stdio.h>

int main()
{
    int arr[100], n, i, small, large;
    printf("Enter how many values you want to read : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the value of a[%d] : ",i);
        scanf("%d", &arr[i]);
    }

    small = arr[0];
    large = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] <  )
        {
            small = arr[ ];
        }
        
        if (arr[i] >  )
        {
            large = arr[ ];
        }
    }

    printf("The largest element of the array = %d\n", large);
    printf("The smallest element of the array = %d\n", small);

    return 0;
}

