#include <stdio.h>
#include<string.h>
int digit(char);
int main(void) {
	char a[100];
	int i,num=0;
	scanf("%s",&a);
	while(digit(a[i]))
	{
	if((strlen(a)-1)>2)
	{
              if(digit(a[i])<digit(a[i+1]))
              {
              printf("invalid");
              }
	}
	
	 if(digit(a[i])>=digit(a[i+1]))
	 {
	  num+=digit(a[i]);
	 }
	else
	{
	 num=num+(digit(a[i+1])-digit(a[i]));
	 i++;
	}
	
	i++;
	}
	printf("%d",num);
	return 0;
}
int digit(char c)
{
 int value=0;
 switch(c)
 {
 case 'I': value=1;break;
 case 'V': value=5;break;
 case 'X': value=10;break;
 case 'L': value=50;break;
 case 'C': value=100;break;
 case 'D': value=500;break;
 case 'M': value=1000;break;
 case '\0': value=0;break;
 default : value=-1;
 }
 return value;
 }
