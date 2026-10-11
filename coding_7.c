#include<stdio.h>
int main()
 {
int a,b;
printf("enter the number:");
scanf("%d", &a);
printf("enter the second number:");
scanf("%d", &b);
a!=0 && a!=1 || b!=0 && b!=1 ? printf("the numbers are invalid"):printf("the truth value of the numbers is: %d", a&&b);
return 0;
}