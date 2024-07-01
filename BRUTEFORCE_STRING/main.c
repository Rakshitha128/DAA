#include <stdio.h>
#include <stdlib.h>
int count;
int bfsm(char T[20],char P[10])
{
    int m,n,i,j;
    n=strlen(T);
    m=strlen(P);
    for(i=0;i<=n-m;i++)
    {
        j=0;

        while(j<m && P[j]==T[i+j])
        {
            j=j+1;
            count++;
        }
        count++;
        if(j==m)
            return i+1;
    }
    return -1;
}

int main()
{
    char T[20],P[10];
    int res;
    printf("Enter the text:\n");
    scanf("%s",T);
    printf("Enter the pattern:\n");
    scanf("%s",P);
    res=bfsm(T,P);
    if(res==-1)
    {
        printf("Pattern not found");
    }
    else
        printf("Pattern found at position %d", res);
        printf("count=%d",count-1);
    return 0;
    }
