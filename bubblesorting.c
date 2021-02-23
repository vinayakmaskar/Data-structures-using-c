
#include <stdio.h>

void main()
{
    int i,j,n,temp,flag;
    int arr[100];

    printf("enter the number of elements \n");
    scanf("%d",&n);

    printf("enter the elements \n");
    for (i=0 ; i<n ; i++)
    scanf("%d",&arr[i]);

    printf("performing bubble sorting\n");

    for (i=0 ; i<n-1 ; i++)
    { flag =0;
        printf("performing pass no %d\n",i+1);

        for (j=0 ; j<n-1-i ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                printf("swapping %d with %d\n",arr[j],arr[j+1]);
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
                

            }
        }
        if (flag == 0)
        break;
    }
    printf("sorted elements are %d\n");
    for (i=0 ; i<n ; i++)
    printf("%d\t",arr[i]);

}