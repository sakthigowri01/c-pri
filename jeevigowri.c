#include<stdio.h>
#inclide<conio.h>
void main()
{
int a[10],n,k,i;
printf("Enter the range");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=0;i<n;i++)
{
 if(a[i]==k)
 printf("Yes");
 }
 }
