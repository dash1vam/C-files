#include<stdio.h>
int main()
 {
int a,b;
printf("enter the number:");
scanf("%d", &a);
printf("enter the second number:");
scanf("%d", &b);
if((a !=0 && a !=1|| b !=0 && b !=1)){
    printf("the numbers are invalid");
    return 0;
}

else {
    printf("the truth value of both numbers is: %d", a && b);
}

    return 0;

 }