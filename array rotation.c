#include<conio.h>
#include<stdio.h>
int main()
{
 int n;
 printf("enter size of array\n");
 scanf("%d",&n);
 int i,temp=0,a[n],j,m;
 printf("enter element of array\n");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 printf("enter how many element rotate");
 scanf("%d",&m);
 for(j=m;j>0;j--)
 {
 temp=a[0];
 for(i=0;i<n;i++)
 {
     a[i]=a[i+1];
 }
 a[n-1]=temp;
 }
 for(i=0;i<n;i++)
 {
     printf(" %d",a[i]);
 }
}
