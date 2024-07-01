#include <stdio.h>
#include <stdlib.h>

void bubblesort(int A[100], int n)
{
    int i,j,temp;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {

            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main()
{
    int A[100],n,i;
    printf("Read array size:");
    scanf("%d",&n);
    printf("Read array elements\n");
    for(i=0;i<=n-1;i++)
    {
    scanf("%d",&A[i]);
    }
    bubblesort(A,n);
    for(i=0;i<=n-1;i++)
    {


    printf("Sorted elements are=\t%d\t",A[i]);
    }
    return 0;
}
