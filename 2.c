#include <stdio.h>
int main()
{
    int ax,ay,bx,by;
    scanf("%d %d %d %d",&ax,&ay,&bx,&by);
    int a[ay][ax],b[by][bx];
    if(ax!=by||ax==0||ay==0||bx==0||by==0)
    {
        printf("Wrong size!\n");
    }
    else
    {
        int i,j;
        for(i=0; i<ay; i++)
        {
            for(j=0; j<ax; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0; i<by; i++)
        {
            for(j=0; j<bx; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        int k,c[ay][bx];
        for(i=0; i<ay; i++)
        {
            for(j=0; j<bx; j++)
            {
                c[i][j]=0;
                for(k=0; k<ax; k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        for(i=0; i<ay; i++)
        {
            for(j=0; j<bx; j++)
            {
                printf("%d ",c[i][j]);
                if(j==bx-1)
                    printf("\n");
            }
        }
    }
    return 0;
}

