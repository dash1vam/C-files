#include<stdio.h>
int add(int *a, int *b);
int add(int *a, int *b){
int c;
c=*a+*b;
*a=6;
printf("the value of the x is:%d\n", *a);
return c;
}
int main(){
int x,y;
printf("enter the 1st number:");
scanf("%d", &x);
printf("enter the 2nd number:");
scanf("%d", &y);
printf("the sum of the x and y is %d", add(&x, &y));
return 0;
}


