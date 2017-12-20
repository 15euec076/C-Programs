#include<stdio.h>
int main(void)
{
 int a,b,c,d,x,y,rem,ti,res;
 scanf("%d:%d",&a,&b);
 scanf("%d:%d",&c,&d);
 x=(a*60)+b;
 y=(c*60)+d;
 if(x>y)
 {
   res=x-y;
 }
 else
  {
    res=y-x;
  }
 ti=res%60;
 rem=res/60;
 printf("%d:%d",rem,ti);
 return 0;
}
