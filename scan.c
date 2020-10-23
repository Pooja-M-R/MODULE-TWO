#include<stdio.h>
void main()
{
int a[5][5];
int i,j,m,n;
printf("enter size and elements");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("elements\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}

