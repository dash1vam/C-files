#include<stdio.h>
void area(float a);
void circumference(int a);
void area(float a){
    float s=3.14*a*a;
    printf("the area of the circle is:%.2f\n",s);
}
void circumference(int a){
    float c=2*3.14*a;
    printf("the circumference if the circle is:%.2f",c);
}
int main(){
    float r;
    printf("enter the radius:");
    scanf("%f", &r);
    area(r);
    circumference(r);
    return 0;
}