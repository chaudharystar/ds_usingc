#include<stdio.h>
#include<conio.h>
int main()
{ int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int i,j,k,a[n];
    printf("\nenter element of array\n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
               if(a[i]==a[j])
                {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
               }
           }
       }
       for(i=0;i<n;i++)
        {
            printf(" %d",a[i]);
        }


}
