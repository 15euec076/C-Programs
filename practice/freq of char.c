#include<stdio.h>
#include<string.h>
int main(void)
{
 int i,f[26];
 char a[100];
 scanf("%s",&a);
 for(i=0;i<26;i++)
 {
  f[i]=0;
 }
 for(i=0;i<strlen(a);i++)
 {
  if(a[i]>='a' && a[i]<='z')
  {
   f[a[i]-97]++;
  }
  else if(a[i]>='A' && a[i]<='Z')
  {
   f[a[i]-65]++;
  }
 }
 for(i=0;i<26;i++)
  {
   if(f[i]!=0)
   {
    printf("%c-%d",(i+97),f[i]);
   }
  }
  return 0;
}
