#include <stdio.h>

int main(void) {
int a=9;
int j,aa=0,aaa=0,aaaa=0,sum,value;
for(j=0;j<2;j++)
{
	aa=aa+(a*pow(10,j));
}
for(j=0;j<3;j++)
{
	aaa=aaa+(a*pow(10,j));
}
for(j=0;j<4;j++)
{
	aaaa=aaaa+(a*pow(10,j));
}
value=a+aa+aaa+aaaa;
printf("%d",value);
	return 0;
}
