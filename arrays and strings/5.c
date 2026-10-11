#include<stdio.h>
void max_minn(int a, int b, int *c, int *d);
void max_minn(int a, int b, int *c, int *d){
    if(a>b){
        *c=a;
        *d=b;
        printf("1st number is greater");
}
else {
    *d=a;
    *c=b;
    printf("second number is greater");
}
}
int main(){
int x, y, max, min;
printf("enter the 1st number:");
scanf("%d", &x);
printf("enter the 2nd number:");
scanf("%d", &y);
max_minn(x, y, &max, &min);

}