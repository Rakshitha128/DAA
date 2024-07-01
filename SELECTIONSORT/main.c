#include <stdio.h>
#include <stdlib.h>
int count;
void selectionsort(int A[100], int n)
{
    int i,j,temp,min;
    for(i=0;i<=n-2;i++)
    {
        min=i;
        for(j=i+1;j<=n-1;j++)
        {
            count++;
            if(A[j]<A[min])
            {
                min=j;
            }


        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;


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
    selectionsort(A,n);
    for(i=0;i<=n-1;i++)
    {


    printf("%d\t",A[i]);
    }
    return 0;


}
