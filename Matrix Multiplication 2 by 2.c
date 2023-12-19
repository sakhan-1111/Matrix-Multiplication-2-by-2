#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k,a[2][2],b[2][2],mul[2][2],r=0;

    printf("Enter the elements of 1st matrix: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of 2nd matrix: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            r=0;
           for(k=0; k<2; k++)
           {
              r=r+a[i][k]*b[k][j];
           }
           mul[i][j]=r;
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;

}
