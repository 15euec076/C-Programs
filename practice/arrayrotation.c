#include<stdio.h>
void rotateByOne(int a[]);
void array(int a[]);
int main(void)
{
 int i,a[10],n,d;
 scanf("%d",&n);
 scanf("%d",&d);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 d=d%n;
 for(i=0;i<d;i++)
 {
  rotateByOne(a);
 }
 array(a);
 return 0;
}
void rotateByOne(int a[])
{
 int i,temp;
 temp=a[0];
 for(i=0;i<n-1;i++)
 {
  a[i]=a[i+1];
 }
  a[n-1]=temp;
}
void array(int a[])
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
 }
