
#include<stdio.h>

void addspar(int x,int y,int spar1[x][3],int spar2[y][3])
{
    int a=0;
    for(int i=1;i<x;i++)
    {
        for(int j=1;j<y;j++)
        {
            if(spar1[i][0]==spar2[j][0] && spar1[i][1]==spar2[j][1])
            {
                spar1[a][2] = spar1[i][2]+spar2[j][2];
            }
            else
            {
                a++;
            }
        }
    }
    printf("Row Column Value\n");
    for (int i = 0; i < (a+1); i++) {
        printf("%d    %d    %d\n", spar1[i][0], spar1[i][1], spar1[i][2]);
    }
}

void main()
{
    int m,n;
    printf("Enter no. of rows for two matrix:");
    scanf("%d %d",&m,&n);
    int spar1[m+1][3];
    printf("Enter 1st sparse matrix(3-tuple format):\n");
    printf("Row Column Value\n");
    spar1[0][0]=m+1;
    spar1[0][1]=3;
    spar1[0][2]=m;
    printf("%d %d %d\n",spar1[0][0],spar1[0][1],spar1[0][2]);
    for(int i=1;i<m+1;i++)
    {
            scanf("%d    %d    %d\n",&spar1[i][0],&spar1[i][1],&spar1[i][2]);           
        
    }
    printf("1st Sparse matrix entered(3-tuple format):\n");
    printf("Row Column Value\n");
    for (int i = 0; i<m+1; i++) {
        printf("%d    %d    %d\n", spar1[i][0], spar1[i][1], spar1[i][2]);
    }
    int spar2[n+1][3];
    printf("Enter 2nd sparse matrix(3-tuple format):\n");
    printf("Row Column Value\n");
    spar2[0][0]=n+1;
    spar2[0][1]=3;
    spar2[0][2]=n;
    printf("%d %d %d\n",spar2[0][0],spar2[0][1],spar2[0][2]);
    for(int i=1;i<n+1;i++)
    {
            scanf("%d    %d    %d\n",&spar2[i][0],&spar2[i][1],&spar2[i][2]);           
        
    }
    printf("2nd Sparse matrix entered(3-tuple format):\n");
    printf("Row Column Value\n");
    for (int i = 0; i<n+1; i++) {
        printf("%d    %d    %d\n", spar2[i][0], spar2[i][1], spar2[i][2]);
    }
    addspar(m,n,spar1,spar2);
}