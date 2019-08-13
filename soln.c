#include<stdio.h>
void main()
{
int a[10],b[10],i,n,found=0;
printf("enter the size of array elements");
scanf("%d",&n);
printf("enter the first array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the second array");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}


for(i=0;i<n;i++)
{
if(a[i]!=b[i])
{
 found=1;
}
}
 if (found==0)
{
printf("elements are equal");
}
else
{
printf("enter array not equal");
}
}

