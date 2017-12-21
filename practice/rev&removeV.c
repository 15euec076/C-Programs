#include <stdio.h>
#include<string.h>
int main(void) 
{
 char s[30];
 int i,len;
 scanf("%s",&s);
 len=strlen(s);
 for(i=(len-1);i>=0;i--)
 {
  printf("%c",s[i]);
 }
 
 for(i=0;i<len;i++)
 {
  if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
  {
    s[i]='\0';
    
  }
 }
  for(i=(len-1);i>=0;i--)
 {
  printf("%c",s[i]);
 }
 
 return 0;
}
