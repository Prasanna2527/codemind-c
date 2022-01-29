#include <stdio.h> 
 
int main()
{
file:///C:/Users/kiran/AppData/Local/Temp/tmp35025d2k.html 4/4 { 
 int num; 
 int rem = 0, sum = 0, n;
 scanf("%d",&num);
 
 //Make a copy of num and store it in variable n 
 n = num; 
 
 //Calculates sum of digits 
 while(num > 0){ 
 rem = num%10; 
 sum = sum + rem; 
 num = num/10; 
 } 
 
 //Checks whether number is divisible by sum of digits 
 if(n%sum == 0) 
 printf("True"); 
 else 
 printf("False"); 
 
 return 0; 
}