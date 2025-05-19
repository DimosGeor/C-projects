#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
main()
{
    int m,n,i,j,s,x,sum2,sum1;
    long A[100][100];
    printf("dwse ton arithmo twn grammwn:");
    m=GetInteger();
    printf("dwse ton arithmo twn sthlwn:");
    n=GetInteger();
    for (i=0;i<=m-1;i++)
    {
        for (j=0;j<=n-1;j++)
        {
            printf("Thesi [%d,%d]:",i,j);
            A[i][j]=GetLong();
        }
    }
    printf("Table:\n");
    for (i=0;i<=m-1;i++)
    {
      s=0;
      for (j=0;j<=n-1;j++)
      {
       printf(" %2d ",A[i][j]);
       s=s+A[i][j];
      }
      printf(" | =%2d",s);
      printf("\n");

    }
    printf ("--------------\n");
    for (j=0;j<=n-1;j++)
    {
        x=0;
        for (i=0;i<=m-1;i++)
        {
            x=x+A[i][j];

        }
        printf("%4d",x);
    }
    printf("\n");
    if (m=n)
    {
        sum1=0;
        sum2=0;
        for (i=0;i<=m-1;i++)
        {
            for (j=0;j<=n-1;j++)
            {
                if (i==j)

                  sum1=A[i][j]+sum1;


                if (i+j==m-1)
                    sum2=A[i][j]+sum2;
            }
        }
        printf ("Sum Diag 1:%d,   Diag 2:%d",sum1,sum2);

    }




}
