
 #include<stdio.h>
int main(void)
{
 int arr[50],n,i,high;
 printf("No.of elements in array");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 high=arr[0];
 for(i=0;i<n;i++)
 {
  if(arr[i]>high) 
  high=arr[i];
  }
  printf("%d",high);
  return 0;
 }
 
