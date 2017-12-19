#include<stdio.h>
int main(int argc, char*argv[])
{
 printf("program name is %s",argv[0]);
 if(argc==3)
 {
  printf("the arguments passed are %s %s",argv[1],argv[2]);
  }
 else if(argc>3)
 {
  printf("more arguments");
  }
 else
 {
  printf("pass one argument");
  }
 return 0;
 }
 
