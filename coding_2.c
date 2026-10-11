#include<stdio.h>
int main(){
    int length;
    int breadth;
    printf("enter the length: ");
    scanf("%d", &length);
    printf("enter the breadth: ");
    scanf("%d", &breadth);
    printf("the area of the rectangle is: %d", length * breadth);
    return 0;
}