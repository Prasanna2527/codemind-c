#include <stdio.h>
#include <math.h>
int main() {
 int num;
 int iVar;
 float fVar;
 //printf("Enter an integer number: ");
 scanf("%d",&num);
 
 fVar=sqrt((double)num);
 iVar=fVar;
file:///C:/Users/kiran/AppData/Local/Temp/tmp35025d2k.html 3/4
 if(iVar==fVar)
 printf("True");
 else
 printf("False");
 
 return 0; }