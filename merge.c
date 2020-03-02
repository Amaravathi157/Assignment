#include<stdio.h>
void main()
{
int m,n,a[10],b[10],i,j;
printf("enter the size of arrays\n");
scanf("%d",&m);
printf("enter the array a\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("enter 2nd array\n");
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
}
merge(m,n,a[m],b[n]);
printf("The array after in place merge sort is\n");
printf("the array 1 is\n");
for(i=0;i<m;i++)
{
printf("%d\t",a[i]);
}
printf("the array 2 is\n");
for(j=0;j<n;j++)
{
printf("%d",b[j]);
}
}
void merge(int m,int n,int a[m],int b[n])
{
    for(int i=n-1;i>0;i--)
    {
        int j,last=a[m-1];
        for(j=m-2;j>=0&&a[j]>b[i];j--)
            a[j+1]=a[j];
        if(j!=m-2||last>b[i])
        {
            a[j+1]=b[i];
            b[i]=last;
        }
    }


}

