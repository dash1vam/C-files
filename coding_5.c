#include<stdio.h>
int main(){
int age;
printf("enter your age:");
scanf("%d", &age);
if(age>10){
printf("you're older than 10");
}
else{
    printf("you're younger than 10");
}
    return 0;
}