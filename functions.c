#include<stdio.h>
void good_morning();
void good_evening();
void good_afternoon();


void good_morning(){
    printf("good morning\n");
}
void good_evening(){
    printf("good evening\n");
}
void good_afternoon(){
    printf("good afternoon\n");
}
int main(){
    good_afternoon();
    good_evening();
    good_morning(); 
    return 0;
}
