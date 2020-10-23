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
printf("Entered elements\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("Transposed elements\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d ",a[j][i]);
}
printf("\n");
}
}


