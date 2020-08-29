#include<stdio.h>
#include<conio.h>
int choice,i,n,a[10],x,postion;
void create()
{

    printf("enter how many element array have\n");
    scanf("%d",&n);

    printf("enter element in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }

}
void insert()
{
    printf("which position element insert\n");
    scanf("%d",&postion);
    printf("which element insert \n");
    scanf("%d",&x);
    n++;
    for(i=n-1;i>=postion-1;i--)
    {
        a[i+1]=a[i];

    }
    a[postion-1]=x;

}
void deleted()
{
   printf("which position element delete\n");
    scanf("%d",&postion);
    for(i=postion-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;

}
void display()
{
    printf(" element are\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);

    }

}
int main()
{
    while(1)
{
  printf(" \n    how do you     \n");
printf("1.create an array\n2.display array element\n3.insert element\n4.deleted\n5.exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
    create();
    break;
case 2:
    display();
    break;
case 3:
    insert();
       break;
case 4:
    deleted();
    break;
case 5:
    exit(1);
    break;
default :
    printf("invalid choice");

}
}


}
