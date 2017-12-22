#include <stdio.h>
#include<string.h>
int main(void) {
char str[30];
int len,i,count1=0,count2=0;
scanf("%s",&str);
len=strlen(str);
for(i=0;i<len;i++)
 {
  if(str[i]>='a' && str[i]<='z') 
  {
   count1++;
  }
 
  if(str[i]>='0'&&str[i]<='9')
  {
    count2++;
  }
 
 } printf("alphabets=%d",count1);
  printf("number=%d",count2);
	return 0;
}
