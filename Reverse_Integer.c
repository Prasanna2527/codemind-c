#include <stdio.h>
int main()
{
file:///C:/Users/kiran/AppData/Local/Temp/tmp35025d2k.html 2/4
 int n, r = 0;
 scanf("%d", &n);
 while (n != 0)
 {
 r = r * 10;
 r = r + n%10;
 n = n/10;
 }
 printf("%d
",r);
 return 0; }