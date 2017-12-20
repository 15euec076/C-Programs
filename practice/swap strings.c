#include <stdio.h>

int main(void) {
	char str[10],temp;
	int i,a;
	scanf("%s",&str);
          for(a=0;str[a]!='\0';++a)
          {
          	
          }
 if(a%2==0)
  {
    for(i=0;i<a;i+=2)
    {
     
     temp=str[i];
     str[i]=str[i+1];
     str[i+1]=temp;
     
    }	
    
    
    printf("%s",str);
  }
  else
         {
  	for(i=0;i<(a-1);i+=2);
             {
     
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
     
             }	
             
           printf("%s",str);
         } 
	return 0;
}
