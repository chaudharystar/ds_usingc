#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the the size array \n ");
    scanf("%d",&n);
    int a[n],i,x,flag=0;
    printf("enter element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\nwhich element search in array=");
    scanf("%d",&x);
        for(i=0;i<n;i++)
    {
        if(x==a[i])
            flag=1;
    }
    if(flag==1)
        printf("element is found ");
    else
        printf("element is not found");
}


