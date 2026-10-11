#include<stdio.h>
int avg(int a, int b, int c);

int avg(int a,int b, int c)
{
    return(a+b+c)/3;
}
int main() {
    int l,m,n;
    printf("enter the numbers:");
    scanf("%d %d %d", &l,&m,&n);
    printf("the avg of the numbers is %d", avg(l,m,n));
    return 0;
}